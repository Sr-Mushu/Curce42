void break_perg ( char *top, char *bot, char *left, char *right)
{
	char sud[4][4];
	int a = 1, b = 1, c = 1, d = 1, k = 0;
	int aa = 1, aaa = 1, aaaa = 1;
	while(a <= 4)
	{
		while(b <= 4)  
		{
			while(c <= 4)
			{
				while( d <= 4)
				{	
					if(a != b && a != c && a != d)
						if(b != a && b != c && b != d)
							if(c != b && c != a && c != d)
								if(d != b && d != c && d != a)
								{
									sud[0][0] = a;
									sud[0][1] = b;
									sud[0][2] = c;
									sud[0][3] = d;
									/*printf("%d,%d,%d,%d \n",sud[0][0],sud[0][1],sud[0][2],sud[0][3]);	*/
								}
									while(aa <= 4)
									{
										while(b <= 4)  
										{
											while(c <= 4)
											{
												while( d <= 4)
												{	
													if(aa != b && a != c && a != d)
														if(b != aa && b != c && b != d)
															if(c != b && c != aa && c != d)
																if(d != b && d != c && d != aa)
																{
																	sud[1][0] = aa;
																	sud[1][1] = b;
																	sud[1][2] = c;
																	sud[1][3] = d;
																	/*printf("%d,%d,%d,%d \n",sud[0][0],sud[0][1],sud[0][2],sud[0][3]);	*/
																}
																	while(aaa <= 4)
																	{
																		while(b <= 4)  
																		{
																			while(c <= 4)
																			{
																				while( d <= 4)
																				{	
																					if(aaa != b && a != c && a != d)
																						if(b != aaa && b != c && b != d)
																							if(c != b && c != aaa && c != d)
																								if(d != b && d != c && d != aaa)
																								{
																									sud[2][0] = aaa;
																									sud[2][1] = b;
																									sud[2][2] = c;
																									sud[2][3] = d;
																									/*printf("%d,%d,%d,%d \n",sud[0][0],sud[0][1],sud[0][2],sud[0][3]);	*/
																								}	
																									while(aaaa <= 4)
																									{
																										while(b <= 4)  
																										{
																											while(c <= 4)
																											{
																												while( d <= 4)
																												{	
																													if(aaaa != b && a != c && a != d)
																														if(b != aaaa && b != c && b != d)
																															if(c != b && c != aaaa && c != d)
																																if(d != b && d != c && d != aaaa)
																																{
																																	sud[3][0] = aaaa;
																																	sud[3][1] = b;
																																	sud[3][2] = c;
																																	sud[3][3] = d;
																																	printf("%d,%d,%d,%d \n",sud[0][0],sud[0][1],sud[0][2],sud[0][3]);
																																	printf("%d,%d,%d,%d \n",sud[1][0],sud[1][1],sud[1][2],sud[1][3]);
																																	printf("%d,%d,%d,%d \n",sud[2][0],sud[2][1],sud[2][2],sud[2][3]);
																																	printf("%d,%d,%d,%d \n",sud[3][0],sud[3][1],sud[3][2],sud[3][3]);
																																	printf("=========== \n");
																																}			
																													d++;
																												}
																												d = 1;
																												c++;
																											}
																											c = 1;
																											b++;
																										}
																										b = 1;
																										aaaa++;
																									}
																					aaaa = 1;		
																					d++;
																				}
																				d = 1;
																				c++;
																			}
																			c = 1;
																			b++;
																		}
																		b = 1;
																		aaa++;
																	}
													aaa = 1;			
													d++;
												}
												d = 1;
												c++;
											}
											c = 1;
											b++;
										}
										b = 1;
										aa++;
									}
					aa = 1;				
					d++;
				}
				d = 1;
				c++;
			}
			c = 1;
			b++;
		}
		b = 1;
		a++;
	}	
}