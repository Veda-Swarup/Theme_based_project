#include <math.h>
#include <string.h>
double sigmoid(double x) {
    if (x < 0.0) {
        double z = exp(x);
        return z / (1.0 + z);
    }
    return 1.0 / (1.0 + exp(-x));
}
void score(double * input, double * output) {
    double var0;
    if (input[5] < 0.2963442) {
        if (input[0] < -1.5295253) {
            if (input[3] < -0.3114714) {
                var0 = 0.119431876;
            } else {
                if (input[3] < 0.42321396) {
                    if (input[5] < -0.23624666) {
                        var0 = 0.112941176;
                    } else {
                        var0 = -0.052819137;
                    }
                } else {
                    var0 = 0.11636364;
                }
            }
        } else {
            if (input[0] < -0.9114438) {
                if (input[5] < -0.14566766) {
                    if (input[2] < -0.42880416) {
                        var0 = 0.043439705;
                    } else {
                        var0 = 0.1182675;
                    }
                } else {
                    if (input[0] < -1.2494789) {
                        var0 = -0.019827468;
                    } else {
                        var0 = 0.031350218;
                    }
                }
            } else {
                if (input[7] < 1.3717442) {
                    if (input[1] < 1.7998767) {
                        var0 = 0.118766055;
                    } else {
                        var0 = -0.03592815;
                    }
                } else {
                    if (input[7] < 2.2024431) {
                        var0 = -0.004943876;
                    } else {
                        var0 = 0.11075486;
                    }
                }
            }
        }
    } else {
        if (input[2] < -0.010053885) {
            if (input[4] < 1.1132717) {
                if (input[0] < -0.9890895) {
                    if (input[3] < 1.5472779) {
                        var0 = -0.054002937;
                    } else {
                        var0 = 0.114832535;
                    }
                } else {
                    if (input[1] < 0.87503827) {
                        var0 = 0.062455595;
                    } else {
                        var0 = -0.029909655;
                    }
                }
            } else {
                if (input[4] < 2.4660504) {
                    if (input[0] < -0.42782572) {
                        var0 = -0.05790532;
                    } else {
                        var0 = -0.030581543;
                    }
                } else {
                    if (input[2] < -2.3433826) {
                        var0 = -0.04992756;
                    } else {
                        var0 = -0.056654565;
                    }
                }
            }
        } else {
            if (input[1] < 0.7440003) {
                if (input[5] < 0.76367307) {
                    if (input[5] < 0.549512) {
                        var0 = 0.113217354;
                    } else {
                        var0 = 0.091244645;
                    }
                } else {
                    if (input[0] < -0.34330863) {
                        var0 = -0.009072169;
                    } else {
                        var0 = 0.08693822;
                    }
                }
            } else {
                if (input[1] < 1.3880605) {
                    if (input[5] < 1.2520027) {
                        var0 = 0.110769235;
                    } else {
                        var0 = -0.04363637;
                    }
                } else {
                    if (input[0] < 0.36506343) {
                        var0 = 0.034285713;
                    } else {
                        var0 = -0.058976233;
                    }
                }
            }
        }
    }
    double var1;
    if (input[1] < 1.3463372) {
        if (input[5] < 0.2963442) {
            if (input[2] < -0.8049654) {
                if (input[1] < -0.12692204) {
                    if (input[1] < -0.40153253) {
                        var1 = 0.11148432;
                    } else {
                        var1 = 0.07040193;
                    }
                } else {
                    if (input[7] < 1.3186984) {
                        var1 = -0.023319907;
                    } else {
                        var1 = 0.04927484;
                    }
                }
            } else {
                if (input[2] < 0.02173918) {
                    if (input[6] < 0.8209485) {
                        var1 = -0.05399907;
                    } else {
                        var1 = 0.051332768;
                    }
                } else {
                    if (input[2] < 0.084040545) {
                        var1 = -0.0538343;
                    } else {
                        var1 = -0.059855774;
                    }
                }
            }
        } else {
            if (input[2] < -0.13803713) {
                if (input[1] < 0.10974017) {
                    if (input[2] < -0.61060196) {
                        var1 = 0.1166401;
                    } else {
                        var1 = 0.093439065;
                    }
                } else {
                    if (input[5] < 1.0420232) {
                        var1 = 0.04911024;
                    } else {
                        var1 = 0.10613867;
                    }
                }
            } else {
                if (input[6] < 1.1647528) {
                    if (input[5] < 0.71585834) {
                        var1 = -0.05633797;
                    } else {
                        var1 = 0.0026465654;
                    }
                } else {
                    if (input[2] < 0.41529825) {
                        var1 = 0.08843948;
                    } else {
                        var1 = -0.042605367;
                    }
                }
            }
        }
    } else {
        var1 = -0.059999507;
    }
    double var2;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            var2 = -0.059999727;
        } else {
            if (input[3] < 1.7358835) {
                if (input[5] < 0.7004639) {
                    if (input[4] < 1.1315169) {
                        var2 = -0.05531599;
                    } else {
                        var2 = 0.07045871;
                    }
                } else {
                    if (input[8] < -1.0087589) {
                        var2 = 0.01297297;
                    } else {
                        var2 = -0.057789553;
                    }
                }
            } else {
                var2 = -0.05992794;
            }
        }
    } else {
        if (input[4] < 2.6867108) {
            if (input[1] < 2.5473828) {
                if (input[7] < 2.006107) {
                    if (input[3] < 1.578523) {
                        var2 = 0.1134037;
                    } else {
                        var2 = 0.09458993;
                    }
                } else {
                    if (input[4] < 1.4531306) {
                        var2 = 0.08887717;
                    } else {
                        var2 = 0.06596562;
                    }
                }
            } else {
                if (input[1] < 3.6610906) {
                    if (input[7] < 2.1581411) {
                        var2 = 0.113802984;
                    } else {
                        var2 = 0.08584097;
                    }
                } else {
                    if (input[1] < 4.8541236) {
                        var2 = 0.11291834;
                    } else {
                        var2 = 0.118871436;
                    }
                }
            }
        } else {
            if (input[4] < 3.2707148) {
                if (input[1] < 5.7891936) {
                    if (input[5] < 5.0620394) {
                        var2 = 0.10908197;
                    } else {
                        var2 = 0.06983036;
                    }
                } else {
                    var2 = 0.11932739;
                }
            } else {
                if (input[1] < 4.8541236) {
                    if (input[5] < 4.366392) {
                        var2 = 0.11740055;
                    } else {
                        var2 = 0.10863284;
                    }
                } else {
                    if (input[1] < 6.2633357) {
                        var2 = 0.117843814;
                    } else {
                        var2 = 0.119864;
                    }
                }
            }
        }
    }
    double var3;
    if (input[5] < 0.3216767) {
        if (input[5] < 0.052108772) {
            if (input[7] < 0.99154794) {
                if (input[8] < -0.71863294) {
                    if (input[1] < -0.405889) {
                        var3 = 0.015248477;
                    } else {
                        var3 = 0.10380663;
                    }
                } else {
                    var3 = 0.106923856;
                }
            } else {
                if (input[1] < 0.013074827) {
                    if (input[8] < -0.94803625) {
                        var3 = -0.04254655;
                    } else {
                        var3 = 0.106059894;
                    }
                } else {
                    if (input[6] < 0.7059682) {
                        var3 = 0.11008333;
                    } else {
                        var3 = 0.009185728;
                    }
                }
            }
        } else {
            if (input[1] < -0.42927554) {
                if (input[3] < -0.35677335) {
                    if (input[6] < 0.6551521) {
                        var3 = 0.1083509;
                    } else {
                        var3 = 0.0023497513;
                    }
                } else {
                    if (input[6] < 2.0959425) {
                        var3 = -0.052226797;
                    } else {
                        var3 = 0.101299904;
                    }
                }
            } else {
                if (input[7] < 1.1189048) {
                    if (input[6] < 0.812421) {
                        var3 = 0.090516984;
                    } else {
                        var3 = 0.03004397;
                    }
                } else {
                    if (input[1] < -0.07761374) {
                        var3 = -0.048955053;
                    } else {
                        var3 = 0.021082938;
                    }
                }
            }
        }
    } else {
        if (input[4] < 1.18589) {
            if (input[6] < 0.33885273) {
                if (input[1] < -0.36940223) {
                    if (input[3] < -0.35677335) {
                        var3 = 0.033770718;
                    } else {
                        var3 = -0.05354247;
                    }
                } else {
                    if (input[1] < 1.3463372) {
                        var3 = 0.056729134;
                    } else {
                        var3 = -0.035261128;
                    }
                }
            } else {
                if (input[1] < -0.20889074) {
                    if (input[8] < -0.6451349) {
                        var3 = -0.05034697;
                    } else {
                        var3 = 0.08749109;
                    }
                } else {
                    if (input[1] < 0.8115792) {
                        var3 = 0.012741252;
                    } else {
                        var3 = -0.033569727;
                    }
                }
            }
        } else {
            if (input[8] < -0.8260985) {
                if (input[4] < 2.4660504) {
                    if (input[3] < 1.0583706) {
                        var3 = -0.05259453;
                    } else {
                        var3 = -0.03098263;
                    }
                } else {
                    if (input[6] < 0.045781214) {
                        var3 = -0.057403557;
                    } else {
                        var3 = -0.05243579;
                    }
                }
            } else {
                if (input[1] < -0.4463321) {
                    if (input[3] < -0.43554708) {
                        var3 = 0.10449939;
                    } else {
                        var3 = -0.041941512;
                    }
                } else {
                    if (input[5] < 1.016038) {
                        var3 = 0.100205034;
                    } else {
                        var3 = 0.014736006;
                    }
                }
            }
        }
    }
    double var4;
    if (input[0] < -0.8048311) {
        if (input[5] < -0.03392489) {
            if (input[2] < -0.7010482) {
                if (input[0] < -1.3282267) {
                    if (input[5] < -0.25483233) {
                        var4 = -0.01548927;
                    } else {
                        var4 = 0.09504948;
                    }
                } else {
                    if (input[1] < -0.39088076) {
                        var4 = 0.07890083;
                    } else {
                        var4 = -0.046297096;
                    }
                }
            } else {
                if (input[5] < -0.16327175) {
                    if (input[2] < -0.42880416) {
                        var4 = -0.01295799;
                    } else {
                        var4 = -0.057310455;
                    }
                } else {
                    if (input[1] < -0.41408536) {
                        var4 = 0.019908799;
                    } else {
                        var4 = -0.04338978;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[4] < 0.49741524) {
                    if (input[0] < -1.2773666) {
                        var4 = 0.09510454;
                    } else {
                        var4 = 0.034116786;
                    }
                } else {
                    if (input[2] < -0.17182903) {
                        var4 = 0.10561964;
                    } else {
                        var4 = 0.05217902;
                    }
                }
            } else {
                var4 = -0.058266275;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[5] < 0.43677843) {
                if (input[7] < 1.3538029) {
                    if (input[2] < -0.76493245) {
                        var4 = -0.04497899;
                    } else {
                        var4 = -0.05771403;
                    }
                } else {
                    if (input[7] < 2.396799) {
                        var4 = 0.059362967;
                    } else {
                        var4 = -0.06024247;
                    }
                }
            } else {
                if (input[4] < 1.4831084) {
                    if (input[7] < 1.5765852) {
                        var4 = -0.0032562893;
                    } else {
                        var4 = 0.06059961;
                    }
                } else {
                    if (input[2] < 0.02173918) {
                        var4 = 0.09438893;
                    } else {
                        var4 = -0.01951186;
                    }
                }
            }
        } else {
            var4 = -0.058203194;
        }
    }
    double var5;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            var5 = -0.058230266;
        } else {
            if (input[8] < -1.0042704) {
                if (input[0] < -0.59951556) {
                    if (input[0] < -0.6535061) {
                        var5 = -0.05559081;
                    } else {
                        var5 = 0.0690944;
                    }
                } else {
                    var5 = -0.058338832;
                }
            } else {
                if (input[5] < 0.7004639) {
                    if (input[4] < 1.1315169) {
                        var5 = -0.048043914;
                    } else {
                        var5 = 0.0654801;
                    }
                } else {
                    if (input[6] < 0.94139427) {
                        var5 = -0.05795605;
                    } else {
                        var5 = -0.039277446;
                    }
                }
            }
        }
    } else {
        if (input[4] < 2.6867108) {
            if (input[1] < 2.366574) {
                if (input[7] < 2.3016891) {
                    if (input[6] < 1.1006693) {
                        var5 = 0.08251939;
                    } else {
                        var5 = 0.107515335;
                    }
                } else {
                    if (input[8] < -1.0107547) {
                        var5 = 0.08320125;
                    } else {
                        var5 = 0.053807776;
                    }
                }
            } else {
                if (input[1] < 3.2012215) {
                    if (input[7] < 2.0830097) {
                        var5 = 0.101094805;
                    } else {
                        var5 = 0.076755434;
                    }
                } else {
                    if (input[1] < 4.8541236) {
                        var5 = 0.1004347;
                    } else {
                        var5 = 0.10665324;
                    }
                }
            }
        } else {
            if (input[6] < 0.10035754) {
                if (input[6] < -0.0036006148) {
                    var5 = 0.10708142;
                } else {
                    if (input[5] < 2.0169249) {
                        var5 = 0.07697577;
                    } else {
                        var5 = 0.10531807;
                    }
                }
            } else {
                if (input[1] < 5.465226) {
                    if (input[4] < 3.2707148) {
                        var5 = 0.08688916;
                    } else {
                        var5 = 0.100205936;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var5 = 0.10263859;
                    } else {
                        var5 = 0.10687726;
                    }
                }
            }
        }
    }
    double var6;
    if (input[5] < 0.3466449) {
        if (input[0] < -1.5295253) {
            if (input[5] < -0.23624666) {
                var6 = 0.09731672;
            } else {
                if (input[8] < -1.0005014) {
                    var6 = 0.10781043;
                } else {
                    if (input[2] < -0.558006) {
                        var6 = -0.050990794;
                    } else {
                        var6 = 0.048250847;
                    }
                }
            }
        } else {
            if (input[7] < 1.223332) {
                if (input[0] < -0.9114438) {
                    if (input[5] < -0.10965646) {
                        var6 = 0.08730364;
                    } else {
                        var6 = 0.009092684;
                    }
                } else {
                    if (input[1] < 1.7709974) {
                        var6 = 0.09594816;
                    } else {
                        var6 = -0.035499733;
                    }
                }
            } else {
                if (input[7] < 2.2024431) {
                    if (input[2] < -0.95650905) {
                        var6 = -0.006153497;
                    } else {
                        var6 = 0.10574803;
                    }
                } else {
                    if (input[1] < -0.36505637) {
                        var6 = -0.04333643;
                    } else {
                        var6 = 0.09962587;
                    }
                }
            }
        }
    } else {
        if (input[2] < -0.010053885) {
            if (input[4] < 1.1500456) {
                if (input[0] < -0.8048311) {
                    if (input[0] < -1.3545768) {
                        var6 = -0.053774163;
                    } else {
                        var6 = -0.036685247;
                    }
                } else {
                    if (input[1] < 0.87503827) {
                        var6 = 0.06229709;
                    } else {
                        var6 = -0.027761022;
                    }
                }
            } else {
                if (input[0] < -0.5682062) {
                    if (input[2] < -0.24199861) {
                        var6 = -0.05564644;
                    } else {
                        var6 = -0.030008523;
                    }
                } else {
                    if (input[4] < 2.4887815) {
                        var6 = -0.028348416;
                    } else {
                        var6 = -0.051633034;
                    }
                }
            }
        } else {
            if (input[1] < 0.8440511) {
                if (input[5] < 0.778336) {
                    if (input[4] < 0.9792598) {
                        var6 = 0.07948792;
                    } else {
                        var6 = 0.09971557;
                    }
                } else {
                    if (input[0] < -0.37219012) {
                        var6 = -0.015921265;
                    } else {
                        var6 = 0.07217726;
                    }
                }
            } else {
                if (input[1] < 1.4828581) {
                    if (input[4] < 1.18589) {
                        var6 = 0.0960782;
                    } else {
                        var6 = -0.044914365;
                    }
                } else {
                    if (input[0] < 0.42093349) {
                        var6 = 0.036947638;
                    } else {
                        var6 = -0.05616309;
                    }
                }
            }
        }
    }
    double var7;
    if (input[0] < -0.7813698) {
        if (input[5] < -0.03392489) {
            if (input[2] < -0.7010482) {
                if (input[1] < -0.39385986) {
                    if (input[8] < -0.88603127) {
                        var7 = 0.08702261;
                    } else {
                        var7 = -0.027236592;
                    }
                } else {
                    if (input[0] < -1.3282267) {
                        var7 = 0.06513353;
                    } else {
                        var7 = -0.043230824;
                    }
                }
            } else {
                if (input[5] < -0.1815262) {
                    if (input[2] < -0.42880416) {
                        var7 = -0.011175709;
                    } else {
                        var7 = -0.056166656;
                    }
                } else {
                    if (input[1] < -0.41408536) {
                        var7 = 0.011610672;
                    } else {
                        var7 = -0.042952914;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[4] < 0.49741524) {
                    if (input[0] < -1.2494789) {
                        var7 = 0.0865578;
                    } else {
                        var7 = 0.027383318;
                    }
                } else {
                    if (input[2] < -0.17182903) {
                        var7 = 0.09580074;
                    } else {
                        var7 = 0.04527084;
                    }
                }
            } else {
                var7 = -0.056703504;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[5] < 0.43677843) {
                if (input[2] < -1.88922) {
                    if (input[1] < 0.676181) {
                        var7 = 0.007489879;
                    } else {
                        var7 = 0.060452417;
                    }
                } else {
                    if (input[3] < 1.378464) {
                        var7 = -0.05567407;
                    } else {
                        var7 = 0.06376549;
                    }
                }
            } else {
                if (input[4] < 1.46874) {
                    if (input[3] < 1.7059771) {
                        var7 = 0.009309677;
                    } else {
                        var7 = 0.07477615;
                    }
                } else {
                    if (input[2] < 0.11512014) {
                        var7 = 0.084727325;
                    } else {
                        var7 = -0.031342946;
                    }
                }
            }
        } else {
            var7 = -0.05660369;
        }
    }
    double var8;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            var8 = -0.056636162;
        } else {
            if (input[6] < -2.2130756) {
                var8 = 0.0026363225;
            } else {
                if (input[8] < -1.0042704) {
                    if (input[2] < -1.7364936) {
                        var8 = -0.05691066;
                    } else {
                        var8 = -0.04297683;
                    }
                } else {
                    if (input[5] < 0.7004639) {
                        var8 = -0.00824227;
                    } else {
                        var8 = -0.054934382;
                    }
                }
            }
        }
    } else {
        if (input[1] < 2.5473828) {
            if (input[2] < -1.6885362) {
                if (input[4] < 3.0935438) {
                    if (input[5] < 1.3567985) {
                        var8 = 0.07611516;
                    } else {
                        var8 = 0.05705468;
                    }
                } else {
                    if (input[6] < 0.16444227) {
                        var8 = 0.096315295;
                    } else {
                        var8 = 0.08588948;
                    }
                }
            } else {
                if (input[2] < -1.3311784) {
                    if (input[4] < 2.4887815) {
                        var8 = 0.07745812;
                    } else {
                        var8 = 0.093825914;
                    }
                } else {
                    if (input[5] < 1.8542025) {
                        var8 = 0.09181436;
                    } else {
                        var8 = 0.09714397;
                    }
                }
            }
        } else {
            if (input[6] < 0.036046036) {
                if (input[4] < 1.0559446) {
                    if (input[6] < -1.0410559) {
                        var8 = 0.09809044;
                    } else {
                        var8 = 0.04093697;
                    }
                } else {
                    if (input[6] < -0.10942445) {
                        var8 = 0.09716985;
                    } else {
                        var8 = 0.09523213;
                    }
                }
            } else {
                if (input[1] < 4.8541236) {
                    if (input[6] < 0.6042332) {
                        var8 = 0.07891617;
                    } else {
                        var8 = 0.09316635;
                    }
                } else {
                    if (input[1] < 6.2633357) {
                        var8 = 0.092612505;
                    } else {
                        var8 = 0.09687221;
                    }
                }
            }
        }
    }
    double var9;
    if (input[4] < 0.49741524) {
        if (input[0] < -1.5579753) {
            if (input[2] < -0.5850242) {
                if (input[3] < 0.42321396) {
                    if (input[4] < -0.33377153) {
                        var9 = 0.097918354;
                    } else {
                        var9 = -0.048292305;
                    }
                } else {
                    if (input[2] < -1.7169069) {
                        var9 = 0.11621227;
                    } else {
                        var9 = -0.0001891916;
                    }
                }
            } else {
                if (input[4] < 0.46900508) {
                    var9 = 0.091516204;
                } else {
                    var9 = 0.030219436;
                }
            }
        } else {
            if (input[1] < 0.676181) {
                if (input[0] < -0.88397586) {
                    if (input[6] < 0.6229602) {
                        var9 = 0.085133865;
                    } else {
                        var9 = -0.023500016;
                    }
                } else {
                    if (input[2] < -2.0964575) {
                        var9 = 0.056085456;
                    } else {
                        var9 = 0.0882611;
                    }
                }
            } else {
                if (input[6] < 0.59192634) {
                    if (input[6] < -1.352736) {
                        var9 = -0.049612764;
                    } else {
                        var9 = 0.04431222;
                    }
                } else {
                    if (input[2] < -2.6575673) {
                        var9 = 0.11328647;
                    } else {
                        var9 = -0.043718684;
                    }
                }
            }
        }
    } else {
        if (input[2] < -0.010053885) {
            if (input[4] < 1.1132717) {
                if (input[0] < -0.9890895) {
                    if (input[2] < -0.20537838) {
                        var9 = -0.05078974;
                    } else {
                        var9 = 0.027550036;
                    }
                } else {
                    if (input[1] < 0.87503827) {
                        var9 = 0.046539214;
                    } else {
                        var9 = -0.025202557;
                    }
                }
            } else {
                if (input[0] < -0.58260196) {
                    if (input[2] < -0.40193808) {
                        var9 = -0.05428517;
                    } else {
                        var9 = -0.038825456;
                    }
                } else {
                    if (input[4] < 2.4887815) {
                        var9 = -0.026481427;
                    } else {
                        var9 = -0.050147723;
                    }
                }
            }
        } else {
            if (input[1] < 0.8440511) {
                if (input[6] < 1.1647528) {
                    if (input[0] < -0.76027143) {
                        var9 = 0.01955746;
                    } else {
                        var9 = 0.088161744;
                    }
                } else {
                    if (input[2] < 0.3694625) {
                        var9 = -0.011217711;
                    } else {
                        var9 = 0.079084076;
                    }
                }
            } else {
                if (input[1] < 1.4828581) {
                    if (input[4] < 1.0752965) {
                        var9 = 0.093208805;
                    } else {
                        var9 = -0.044234097;
                    }
                } else {
                    if (input[0] < 0.42093349) {
                        var9 = 0.0019961782;
                    } else {
                        var9 = -0.054840073;
                    }
                }
            }
        }
    }
    double var10;
    if (input[0] < -0.7813698) {
        if (input[5] < -0.03392489) {
            if (input[6] < 0.31282315) {
                if (input[0] < -1.791021) {
                    if (input[5] < -0.14566766) {
                        var10 = -0.055510778;
                    } else {
                        var10 = 0.08551115;
                    }
                } else {
                    if (input[6] < -0.10942445) {
                        var10 = -0.05558839;
                    } else {
                        var10 = -0.042543035;
                    }
                }
            } else {
                if (input[0] < -1.3282267) {
                    if (input[5] < -0.25483233) {
                        var10 = -0.011225815;
                    } else {
                        var10 = 0.081332885;
                    }
                } else {
                    if (input[6] < 1.131379) {
                        var10 = -0.023723185;
                    } else {
                        var10 = 0.06254762;
                    }
                }
            }
        } else {
            if (input[3] < 1.4120835) {
                if (input[4] < 0.46900508) {
                    if (input[6] < -0.43760318) {
                        var10 = -0.04472757;
                    } else {
                        var10 = 0.0666982;
                    }
                } else {
                    if (input[8] < -0.6008304) {
                        var10 = 0.0865287;
                    } else {
                        var10 = -0.042314555;
                    }
                }
            } else {
                if (input[8] < -1.0110432) {
                    if (input[3] < 1.515511) {
                        var10 = -0.03086807;
                    } else {
                        var10 = -0.054761656;
                    }
                } else {
                    if (input[4] < 2.4215734) {
                        var10 = -0.03547169;
                    } else {
                        var10 = 0.04138576;
                    }
                }
            }
        }
    } else {
        if (input[3] < 2.1428928) {
            if (input[5] < 0.3717797) {
                if (input[7] < 1.3186984) {
                    if (input[7] < 1.1014061) {
                        var10 = -0.05437919;
                    } else {
                        var10 = -0.024833376;
                    }
                } else {
                    if (input[7] < 2.2024431) {
                        var10 = 0.03963028;
                    } else {
                        var10 = -0.052408364;
                    }
                }
            } else {
                if (input[0] < 1.5049042) {
                    if (input[6] < -0.27517426) {
                        var10 = -0.051627524;
                    } else {
                        var10 = 0.040002346;
                    }
                } else {
                    if (input[3] < 1.6118222) {
                        var10 = -0.0016363914;
                    } else {
                        var10 = -0.042770825;
                    }
                }
            }
        } else {
            if (input[3] < 2.3100052) {
                if (input[0] < 1.6853056) {
                    if (input[5] < 1.6374214) {
                        var10 = -0.011178958;
                    } else {
                        var10 = -0.051860824;
                    }
                } else {
                    var10 = -0.055348933;
                }
            } else {
                if (input[3] < 2.3650753) {
                    if (input[7] < 2.8662586) {
                        var10 = -0.054851558;
                    } else {
                        var10 = -0.030653514;
                    }
                } else {
                    var10 = -0.055114172;
                }
            }
        }
    }
    double var11;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            var11 = -0.05520393;
        } else {
            if (input[3] < 1.7358835) {
                if (input[5] < 0.6703293) {
                    if (input[0] < 1.2574203) {
                        var11 = -0.054254763;
                    } else {
                        var11 = 0.04668975;
                    }
                } else {
                    if (input[8] < -1.0087589) {
                        var11 = 0.028731145;
                    } else {
                        var11 = -0.053215716;
                    }
                }
            } else {
                var11 = -0.055506963;
            }
        }
    } else {
        if (input[1] < 2.5473828) {
            if (input[6] < -0.32784718) {
                if (input[6] < -0.5862255) {
                    if (input[8] < -1.0183598) {
                        var11 = -0.05106479;
                    } else {
                        var11 = 0.09086749;
                    }
                } else {
                    if (input[5] < 1.7278137) {
                        var11 = 0.020308893;
                    } else {
                        var11 = 0.087386176;
                    }
                }
            } else {
                if (input[6] < 1.0421718) {
                    if (input[7] < 2.006107) {
                        var11 = 0.07199973;
                    } else {
                        var11 = 0.061848667;
                    }
                } else {
                    if (input[3] < 3.1779518) {
                        var11 = 0.08967861;
                    } else {
                        var11 = -0.0413908;
                    }
                }
            }
        } else {
            if (input[6] < 0.045781214) {
                if (input[6] < -1.0410559) {
                    var11 = 0.0900865;
                } else {
                    if (input[5] < 1.1249181) {
                        var11 = 0.0725557;
                    } else {
                        var11 = 0.08856839;
                    }
                }
            } else {
                if (input[1] < 4.8541236) {
                    if (input[6] < 0.6042332) {
                        var11 = 0.07203563;
                    } else {
                        var11 = 0.08571329;
                    }
                } else {
                    if (input[1] < 6.2633357) {
                        var11 = 0.08492205;
                    } else {
                        var11 = 0.08898372;
                    }
                }
            }
        }
    }
    double var12;
    if (input[4] < 0.5222699) {
        if (input[0] < -1.5579753) {
            if (input[2] < -0.5850242) {
                if (input[3] < 0.42321396) {
                    if (input[4] < -0.33377153) {
                        var12 = 0.09110051;
                    } else {
                        var12 = -0.047647156;
                    }
                } else {
                    if (input[4] < 0.44063616) {
                        var12 = 0.10909732;
                    } else {
                        var12 = -0.002480196;
                    }
                }
            } else {
                var12 = 0.08450468;
            }
        } else {
            if (input[1] < 0.7440003) {
                if (input[0] < -0.88397586) {
                    if (input[6] < 0.6291102) {
                        var12 = 0.07833486;
                    } else {
                        var12 = -0.023481602;
                    }
                } else {
                    if (input[2] < -2.0869267) {
                        var12 = 0.046849888;
                    } else {
                        var12 = 0.08170422;
                    }
                }
            } else {
                if (input[6] < 0.6042332) {
                    if (input[6] < -1.352736) {
                        var12 = -0.048871305;
                    } else {
                        var12 = 0.03440495;
                    }
                } else {
                    if (input[2] < -2.6575673) {
                        var12 = 0.10867625;
                    } else {
                        var12 = -0.043108735;
                    }
                }
            }
        }
    } else {
        if (input[2] < -0.010053885) {
            if (input[4] < 1.2040265) {
                if (input[0] < -0.71952313) {
                    if (input[0] < -1.2773666) {
                        var12 = -0.051285204;
                    } else {
                        var12 = -0.031668965;
                    }
                } else {
                    if (input[1] < 0.8440511) {
                        var12 = 0.05472112;
                    } else {
                        var12 = -0.022938337;
                    }
                }
            } else {
                if (input[0] < -0.53153956) {
                    if (input[2] < -0.37063894) {
                        var12 = -0.052935008;
                    } else {
                        var12 = -0.03471836;
                    }
                } else {
                    if (input[4] < 2.4887815) {
                        var12 = -0.025781956;
                    } else {
                        var12 = -0.0487493;
                    }
                }
            }
        } else {
            if (input[1] < 0.7440003) {
                if (input[6] < 1.1647528) {
                    if (input[0] < -0.76027143) {
                        var12 = 0.015485148;
                    } else {
                        var12 = 0.08222986;
                    }
                } else {
                    if (input[2] < 0.3694625) {
                        var12 = -0.010357819;
                    } else {
                        var12 = 0.07363019;
                    }
                }
            } else {
                if (input[8] < -0.96519125) {
                    if (input[1] < 1.1223204) {
                        var12 = -0.028780272;
                    } else {
                        var12 = -0.052212227;
                    }
                } else {
                    var12 = 0.07879623;
                }
            }
        }
    }
    double var13;
    if (input[1] < 1.3463372) {
        if (input[5] < 0.2688818) {
            if (input[2] < -0.74347) {
                if (input[1] < -0.12692204) {
                    if (input[1] < -0.38781208) {
                        var13 = 0.078034654;
                    } else {
                        var13 = 0.043766826;
                    }
                } else {
                    if (input[7] < 1.3538029) {
                        var13 = -0.0199893;
                    } else {
                        var13 = 0.040187392;
                    }
                }
            } else {
                if (input[2] < 0.02173918) {
                    if (input[1] < -0.405889) {
                        var13 = 0.016012387;
                    } else {
                        var13 = -0.046699066;
                    }
                } else {
                    if (input[2] < 0.084040545) {
                        var13 = -0.047286678;
                    } else {
                        var13 = -0.05372465;
                    }
                }
            }
        } else {
            if (input[2] < -0.13803713) {
                if (input[4] < 0.8432037) {
                    if (input[1] < -0.13895735) {
                        var13 = 0.07423287;
                    } else {
                        var13 = 0.010012805;
                    }
                } else {
                    if (input[3] < 1.2304595) {
                        var13 = 0.07929461;
                    } else {
                        var13 = 0.05785551;
                    }
                }
            } else {
                if (input[5] < 0.778336) {
                    if (input[5] < 0.6269806) {
                        var13 = -0.045270532;
                    } else {
                        var13 = -0.015451884;
                    }
                } else {
                    if (input[2] < 0.3694625) {
                        var13 = 0.0451157;
                    } else {
                        var13 = -0.052338984;
                    }
                }
            }
        }
    } else {
        if (input[1] < 2.2881737) {
            var13 = -0.05452044;
        } else {
            var13 = -0.053788483;
        }
    }
    double var14;
    if (input[1] < 1.3463372) {
        if (input[1] < 0.87503827) {
            var14 = -0.053886298;
        } else {
            if (input[1] < 1.2797261) {
                var14 = -0.054663353;
            } else {
                if (input[3] < 1.7358835) {
                    if (input[8] < -1.0087589) {
                        var14 = 0.005363718;
                    } else {
                        var14 = -0.050203383;
                    }
                } else {
                    var14 = -0.054773826;
                }
            }
        }
    } else {
        if (input[4] < 2.874527) {
            if (input[2] < -1.5667169) {
                if (input[8] < -1.0101902) {
                    if (input[6] < -0.40349558) {
                        var14 = 0.08437353;
                    } else {
                        var14 = 0.068531245;
                    }
                } else {
                    if (input[6] < -0.5164247) {
                        var14 = 0.08418927;
                    } else {
                        var14 = 0.051094983;
                    }
                }
            } else {
                if (input[6] < 0.87866986) {
                    if (input[6] < -0.076917596) {
                        var14 = 0.08398674;
                    } else {
                        var14 = 0.07041497;
                    }
                } else {
                    if (input[2] < -1.4906932) {
                        var14 = 0.08038071;
                    } else {
                        var14 = 0.08511969;
                    }
                }
            }
        } else {
            if (input[6] < 0.17229258) {
                if (input[6] < 0.036046036) {
                    var14 = 0.08255372;
                } else {
                    if (input[4] < 3.1224794) {
                        var14 = 0.069891006;
                    } else {
                        var14 = 0.08188667;
                    }
                }
            } else {
                if (input[2] < -1.9074583) {
                    if (input[1] < 4.731023) {
                        var14 = 0.06647485;
                    } else {
                        var14 = 0.08001021;
                    }
                } else {
                    if (input[2] < -1.5871143) {
                        var14 = 0.078345485;
                    } else {
                        var14 = 0.08185962;
                    }
                }
            }
        }
    }
    double var15;
    if (input[5] < 0.3717797) {
        if (input[2] < -0.8049654) {
            if (input[1] < -0.11518109) {
                if (input[1] < -0.31262922) {
                    if (input[8] < -0.89562327) {
                        var15 = -0.04399547;
                    } else {
                        var15 = 0.07010496;
                    }
                } else {
                    if (input[7] < 0.71422815) {
                        var15 = 0.035299353;
                    } else {
                        var15 = -0.03987704;
                    }
                }
            } else {
                if (input[7] < 1.3186984) {
                    if (input[3] < 0.13499567) {
                        var15 = -0.023617823;
                    } else {
                        var15 = 0.06479888;
                    }
                } else {
                    if (input[7] < 2.2024431) {
                        var15 = -0.00718372;
                    } else {
                        var15 = 0.087395914;
                    }
                }
            }
        } else {
            if (input[2] < 0.02173918) {
                if (input[1] < -0.3516676) {
                    if (input[5] < -0.1270127) {
                        var15 = 0.065911785;
                    } else {
                        var15 = -0.006009528;
                    }
                } else {
                    if (input[1] < 1.707638) {
                        var15 = 0.07497309;
                    } else {
                        var15 = -0.049775243;
                    }
                }
            } else {
                if (input[1] < 1.4189887) {
                    if (input[2] < 0.084040545) {
                        var15 = 0.073558055;
                    } else {
                        var15 = 0.076898426;
                    }
                } else {
                    if (input[3] < 1.0194443) {
                        var15 = -0.04907719;
                    } else {
                        var15 = 0.0058690193;
                    }
                }
            }
        }
    } else {
        if (input[4] < 1.2040265) {
            if (input[1] < -0.28967178) {
                if (input[2] < -0.17182903) {
                    if (input[4] < 0.117171735) {
                        var15 = 0.07978165;
                    } else {
                        var15 = -0.048773207;
                    }
                } else {
                    if (input[5] < 0.7004639) {
                        var15 = 0.064783365;
                    } else {
                        var15 = -0.036271673;
                    }
                }
            } else {
                if (input[1] < 0.87503827) {
                    if (input[2] < -1.167169) {
                        var15 = 0.0039227703;
                    } else {
                        var15 = 0.05067107;
                    }
                } else {
                    if (input[1] < 1.4828581) {
                        var15 = -0.009699615;
                    } else {
                        var15 = -0.035619855;
                    }
                }
            }
        } else {
            if (input[2] < 0.02173918) {
                if (input[4] < 2.4660504) {
                    if (input[3] < 1.0583706) {
                        var15 = -0.048107464;
                    } else {
                        var15 = -0.024955733;
                    }
                } else {
                    if (input[2] < -2.3325837) {
                        var15 = -0.041587293;
                    } else {
                        var15 = -0.049139764;
                    }
                }
            } else {
                if (input[1] < 0.30805492) {
                    if (input[4] < 1.5644528) {
                        var15 = 0.06995094;
                    } else {
                        var15 = 0.08782163;
                    }
                } else {
                    if (input[5] < 1.4412032) {
                        var15 = 0.07213606;
                    } else {
                        var15 = -0.04703106;
                    }
                }
            }
        }
    }
    double var16;
    if (input[0] < -0.7813698) {
        if (input[5] < -0.03392489) {
            if (input[6] < 0.31282315) {
                if (input[0] < -1.936442) {
                    if (input[5] < -0.14566766) {
                        var16 = -0.056126345;
                    } else {
                        var16 = 0.07336865;
                    }
                } else {
                    if (input[2] < -0.40193808) {
                        var16 = -0.03578873;
                    } else {
                        var16 = -0.053012133;
                    }
                }
            } else {
                if (input[2] < -0.6580676) {
                    if (input[1] < -0.39088076) {
                        var16 = 0.078180626;
                    } else {
                        var16 = 0.035900854;
                    }
                } else {
                    if (input[6] < 1.2912512) {
                        var16 = -0.039818387;
                    } else {
                        var16 = 0.06248475;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[5] < 0.3466449) {
                    if (input[0] < -1.2773666) {
                        var16 = 0.072589345;
                    } else {
                        var16 = 0.02187346;
                    }
                } else {
                    if (input[6] < -2.5654123) {
                        var16 = -0.06836959;
                    } else {
                        var16 = 0.07590346;
                    }
                }
            } else {
                var16 = -0.054073527;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[5] < 0.39438874) {
                if (input[7] < 1.3538029) {
                    if (input[2] < -0.7850605) {
                        var16 = -0.039013796;
                    } else {
                        var16 = -0.052204736;
                    }
                } else {
                    if (input[7] < 2.3772779) {
                        var16 = 0.04369811;
                    } else {
                        var16 = -0.06045121;
                    }
                }
            } else {
                if (input[5] < 1.2520027) {
                    if (input[6] < 0.10903511) {
                        var16 = -0.032409724;
                    } else {
                        var16 = 0.03942518;
                    }
                } else {
                    if (input[6] < -0.53822607) {
                        var16 = -0.070608474;
                    } else {
                        var16 = 0.06845828;
                    }
                }
            }
        } else {
            if (input[1] < 2.2881737) {
                var16 = -0.053305797;
            } else {
                var16 = -0.05259445;
            }
        }
    }
    double var17;
    if (input[3] < 1.4120835) {
        if (input[3] < 0.98658097) {
            if (input[3] < 0.58490884) {
                if (input[0] < 0.68187267) {
                    var17 = -0.052656654;
                } else {
                    if (input[6] < 1.802359) {
                        var17 = -0.05276049;
                    } else {
                        var17 = -0.026957428;
                    }
                }
            } else {
                if (input[2] < -0.76493245) {
                    if (input[6] < -0.5624454) {
                        var17 = 0.024560766;
                    } else {
                        var17 = -0.048938584;
                    }
                } else {
                    if (input[6] < 0.7522885) {
                        var17 = -0.028475046;
                    } else {
                        var17 = 0.014377724;
                    }
                }
            }
        } else {
            if (input[6] < -0.61161494) {
                if (input[6] < -0.7188839) {
                    if (input[7] < 0.47780812) {
                        var17 = -0.029201867;
                    } else {
                        var17 = 0.07641941;
                    }
                } else {
                    if (input[4] < 1.18589) {
                        var17 = -0.019808084;
                    } else {
                        var17 = 0.061930373;
                    }
                }
            } else {
                if (input[2] < -1.5767516) {
                    if (input[2] < -1.9170718) {
                        var17 = -0.046627164;
                    } else {
                        var17 = -0.029910326;
                    }
                } else {
                    if (input[6] < 1.1647528) {
                        var17 = -0.0004483879;
                    } else {
                        var17 = 0.05357692;
                    }
                }
            }
        }
    } else {
        if (input[3] < 2.0789537) {
            if (input[2] < -1.7949777) {
                if (input[4] < 3.1504886) {
                    if (input[6] < -0.5862255) {
                        var17 = 0.07522264;
                    } else {
                        var17 = -0.0133064175;
                    }
                } else {
                    if (input[3] < 1.6759915) {
                        var17 = 0.012857919;
                    } else {
                        var17 = 0.06441673;
                    }
                }
            } else {
                if (input[2] < -1.3701992) {
                    if (input[6] < 0.016482182) {
                        var17 = 0.0766653;
                    } else {
                        var17 = 0.038773455;
                    }
                } else {
                    if (input[0] < 0.42093349) {
                        var17 = 0.049336627;
                    } else {
                        var17 = 0.07464415;
                    }
                }
            }
        } else {
            if (input[3] < 2.3382642) {
                if (input[2] < -2.2572403) {
                    if (input[4] < 1.0559446) {
                        var17 = 0.05565658;
                    } else {
                        var17 = 0.01854979;
                    }
                } else {
                    if (input[2] < -1.5667169) {
                        var17 = 0.05855964;
                    } else {
                        var17 = 0.075802006;
                    }
                }
            } else {
                if (input[6] < 0.08216988) {
                    if (input[4] < 0.5475403) {
                        var17 = 0.0048831617;
                    } else {
                        var17 = 0.076828994;
                    }
                } else {
                    if (input[6] < 0.6689488) {
                        var17 = 0.063598745;
                    } else {
                        var17 = 0.074431784;
                    }
                }
            }
        }
    }
    double var18;
    if (input[5] < 0.3717797) {
        if (input[0] < -1.5295253) {
            if (input[5] < -0.23624666) {
                var18 = 0.07496166;
            } else {
                if (input[3] < 0.42321396) {
                    if (input[3] < -0.3114714) {
                        var18 = 0.025053538;
                    } else {
                        var18 = -0.046504002;
                    }
                } else {
                    if (input[6] < -1.5999739) {
                        var18 = -0.04426847;
                    } else {
                        var18 = 0.09519952;
                    }
                }
            }
        } else {
            if (input[7] < 1.1724008) {
                if (input[0] < -0.9114438) {
                    if (input[6] < 0.6689488) {
                        var18 = 0.06581419;
                    } else {
                        var18 = -0.023107938;
                    }
                } else {
                    if (input[1] < 1.7709974) {
                        var18 = 0.07179752;
                    } else {
                        var18 = -0.03556428;
                    }
                }
            } else {
                if (input[6] < 0.5855442) {
                    if (input[0] < 0.6494735) {
                        var18 = 0.05646597;
                    } else {
                        var18 = 0.0021871568;
                    }
                } else {
                    if (input[0] < 1.3790857) {
                        var18 = -0.030620521;
                    } else {
                        var18 = 0.111796215;
                    }
                }
            }
        }
    } else {
        if (input[0] < -0.71952313) {
            if (input[0] < -1.1870382) {
                if (input[6] < -2.5654123) {
                    var18 = 0.10593327;
                } else {
                    if (input[7] < -0.40992263) {
                        var18 = 0.11143873;
                    } else {
                        var18 = -0.05053938;
                    }
                }
            } else {
                if (input[6] < -0.53822607) {
                    if (input[1] < 1.3463372) {
                        var18 = 0.100837775;
                    } else {
                        var18 = -0.04612512;
                    }
                } else {
                    if (input[5] < 0.6131288) {
                        var18 = -0.013331682;
                    } else {
                        var18 = -0.048521392;
                    }
                }
            }
        } else {
            if (input[5] < 1.4571054) {
                if (input[1] < 0.90770644) {
                    if (input[6] < 0.08216988) {
                        var18 = 0.07805521;
                    } else {
                        var18 = 0.018698335;
                    }
                } else {
                    if (input[6] < 0.43373632) {
                        var18 = -0.008272752;
                    } else {
                        var18 = -0.03029029;
                    }
                }
            } else {
                if (input[1] < 3.0608592) {
                    if (input[6] < 1.0159308) {
                        var18 = -0.029858423;
                    } else {
                        var18 = -0.049638238;
                    }
                } else {
                    if (input[1] < 4.8541236) {
                        var18 = -0.044058036;
                    } else {
                        var18 = -0.050822567;
                    }
                }
            }
        }
    }
    double var19;
    if (input[0] < -0.7813698) {
        if (input[5] < -0.0535848) {
            if (input[6] < 0.31282315) {
                if (input[0] < -2.1870513) {
                    if (input[5] < -0.14566766) {
                        var19 = -0.044030216;
                    } else {
                        var19 = 0.07421441;
                    }
                } else {
                    if (input[2] < -0.40193808) {
                        var19 = -0.0341741;
                    } else {
                        var19 = -0.05188609;
                    }
                }
            } else {
                if (input[2] < -0.63441837) {
                    if (input[3] < -0.11250562) {
                        var19 = 0.07569396;
                    } else {
                        var19 = 0.037321113;
                    }
                } else {
                    if (input[6] < 1.2545375) {
                        var19 = -0.039739683;
                    } else {
                        var19 = 0.05877805;
                    }
                }
            }
        } else {
            if (input[3] < 1.4120835) {
                if (input[5] < 0.2963442) {
                    if (input[0] < -1.2494789) {
                        var19 = 0.066858515;
                    } else {
                        var19 = 0.016528966;
                    }
                } else {
                    if (input[3] < 1.1894943) {
                        var19 = 0.07084452;
                    } else {
                        var19 = 0.04307369;
                    }
                }
            } else {
                if (input[8] < -1.0110432) {
                    if (input[6] < 1.131379) {
                        var19 = -0.05209825;
                    } else {
                        var19 = -0.028772762;
                    }
                } else {
                    if (input[2] < -1.9347459) {
                        var19 = 0.032651298;
                    } else {
                        var19 = -0.05084541;
                    }
                }
            }
        }
    } else {
        if (input[3] < 2.1654973) {
            if (input[5] < 0.3717797) {
                if (input[7] < 1.3717442) {
                    if (input[2] < -0.74347) {
                        var19 = -0.03746052;
                    } else {
                        var19 = -0.051114954;
                    }
                } else {
                    if (input[7] < 2.2024431) {
                        var19 = 0.03717972;
                    } else {
                        var19 = -0.05141104;
                    }
                }
            } else {
                if (input[0] < 1.5049042) {
                    if (input[6] < -0.27517426) {
                        var19 = -0.049176183;
                    } else {
                        var19 = 0.032112874;
                    }
                } else {
                    if (input[3] < 1.6118222) {
                        var19 = -0.002358066;
                    } else {
                        var19 = -0.04020904;
                    }
                }
            }
        } else {
            if (input[3] < 2.3100052) {
                if (input[2] < -2.3226154) {
                    if (input[5] < 1.6374214) {
                        var19 = 0.004012864;
                    } else {
                        var19 = -0.051573355;
                    }
                } else {
                    if (input[2] < -2.2856095) {
                        var19 = -0.04612524;
                    } else {
                        var19 = -0.0519545;
                    }
                }
            } else {
                if (input[3] < 2.3650753) {
                    if (input[2] < -2.4684343) {
                        var19 = -0.026772367;
                    } else {
                        var19 = -0.05186356;
                    }
                } else {
                    var19 = -0.05155954;
                }
            }
        }
    }
    double var20;
    if (input[3] < 1.4120835) {
        if (input[3] < 0.98658097) {
            if (input[3] < 0.58490884) {
                if (input[0] < 0.68187267) {
                    var20 = -0.051575176;
                } else {
                    if (input[6] < 1.802359) {
                        var20 = -0.051696595;
                    } else {
                        var20 = -0.026254954;
                    }
                }
            } else {
                if (input[6] < -0.61161494) {
                    if (input[3] < 0.8351349) {
                        var20 = -0.015789848;
                    } else {
                        var20 = 0.061817005;
                    }
                } else {
                    if (input[7] < 1.0498134) {
                        var20 = -0.03142245;
                    } else {
                        var20 = -0.04734951;
                    }
                }
            }
        } else {
            if (input[6] < -0.61161494) {
                if (input[6] < -0.7188839) {
                    if (input[7] < 0.47780812) {
                        var20 = -0.033330932;
                    } else {
                        var20 = 0.07177056;
                    }
                } else {
                    if (input[4] < 1.18589) {
                        var20 = -0.030126693;
                    } else {
                        var20 = 0.058878217;
                    }
                }
            } else {
                if (input[6] < 0.94139427) {
                    if (input[5] < 1.7475541) {
                        var20 = -0.04429234;
                    } else {
                        var20 = -0.019175515;
                    }
                } else {
                    if (input[0] < 1.1365709) {
                        var20 = -0.0028584886;
                    } else {
                        var20 = 0.065795414;
                    }
                }
            }
        }
    } else {
        if (input[3] < 2.1209483) {
            if (input[5] < 1.766917) {
                if (input[0] < 1.5049042) {
                    if (input[6] < -0.7188839) {
                        var20 = 0.07416351;
                    } else {
                        var20 = -0.01866601;
                    }
                } else {
                    if (input[3] < 1.9179288) {
                        var20 = 0.01117931;
                    } else {
                        var20 = 0.048242204;
                    }
                }
            } else {
                if (input[6] < 0.08216988) {
                    if (input[6] < -0.1893829) {
                        var20 = 0.07355821;
                    } else {
                        var20 = 0.06281306;
                    }
                } else {
                    if (input[6] < 0.9201265) {
                        var20 = 0.033978757;
                    } else {
                        var20 = 0.06644028;
                    }
                }
            }
        } else {
            if (input[4] < 2.874527) {
                if (input[3] < 2.3382642) {
                    if (input[7] < 2.2507963) {
                        var20 = 0.05458202;
                    } else {
                        var20 = 0.018087884;
                    }
                } else {
                    if (input[6] < -0.40349558) {
                        var20 = 0.074488506;
                    } else {
                        var20 = 0.05998765;
                    }
                }
            } else {
                if (input[6] < 0.17229258) {
                    if (input[6] < -0.0036006148) {
                        var20 = 0.07271594;
                    } else {
                        var20 = 0.071202636;
                    }
                } else {
                    if (input[3] < 5.0177155) {
                        var20 = 0.06493139;
                    } else {
                        var20 = 0.07214641;
                    }
                }
            }
        }
    }
    double var21;
    if (input[5] < 0.3717797) {
        if (input[0] < -1.5295253) {
            if (input[5] < -0.23624666) {
                var21 = 0.0709982;
            } else {
                if (input[3] < 0.42321396) {
                    if (input[2] < -0.558006) {
                        var21 = -0.045077104;
                    } else {
                        var21 = 0.031914208;
                    }
                } else {
                    if (input[4] < 0.59291244) {
                        var21 = 0.094258614;
                    } else {
                        var21 = -0.014845114;
                    }
                }
            }
        } else {
            if (input[2] < -0.30732393) {
                if (input[6] < 0.6105327) {
                    if (input[2] < -2.0135303) {
                        var21 = 0.020791242;
                    } else {
                        var21 = 0.06224122;
                    }
                } else {
                    if (input[3] < -0.003152875) {
                        var21 = -0.02856679;
                    } else {
                        var21 = 0.031270288;
                    }
                }
            } else {
                if (input[0] < -0.8048311) {
                    if (input[6] < 0.6229602) {
                        var21 = 0.07064943;
                    } else {
                        var21 = -0.0070209764;
                    }
                } else {
                    if (input[3] < 0.8943665) {
                        var21 = 0.06850849;
                    } else {
                        var21 = -0.016344579;
                    }
                }
            }
        }
    } else {
        if (input[4] < 1.2889661) {
            if (input[0] < -0.69675535) {
                if (input[0] < -1.2185669) {
                    if (input[8] < -1.0121691) {
                        var21 = 0.022961736;
                    } else {
                        var21 = -0.0477079;
                    }
                } else {
                    if (input[6] < -0.06638456) {
                        var21 = 0.10809871;
                    } else {
                        var21 = -0.04080691;
                    }
                }
            } else {
                if (input[3] < 1.515511) {
                    if (input[6] < 1.1006693) {
                        var21 = 0.05000031;
                    } else {
                        var21 = -0.021532353;
                    }
                } else {
                    if (input[0] < 0.16366915) {
                        var21 = 0.059546795;
                    } else {
                        var21 = -0.025788553;
                    }
                }
            }
        } else {
            if (input[2] < 0.02173918) {
                if (input[0] < -0.40506858) {
                    if (input[2] < -0.37063894) {
                        var21 = -0.04964625;
                    } else {
                        var21 = -0.029984599;
                    }
                } else {
                    if (input[4] < 2.5704267) {
                        var21 = -0.022465494;
                    } else {
                        var21 = -0.04536202;
                    }
                }
            } else {
                if (input[3] < 0.58490884) {
                    if (input[6] < 1.349296) {
                        var21 = 0.08017349;
                    } else {
                        var21 = 0.018999983;
                    }
                } else {
                    if (input[5] < 1.2520027) {
                        var21 = 0.06579779;
                    } else {
                        var21 = -0.048617855;
                    }
                }
            }
        }
    }
    double var22;
    if (input[0] < -0.7813698) {
        if (input[5] < -0.14566766) {
            if (input[2] < -0.84172726) {
                if (input[6] < 0.34612516) {
                    var22 = -0.059243698;
                } else {
                    if (input[3] < -0.0753598) {
                        var22 = 0.07500903;
                    } else {
                        var22 = 0.011223082;
                    }
                }
            } else {
                if (input[2] < -0.42880416) {
                    if (input[1] < -0.40802914) {
                        var22 = 0.04520194;
                    } else {
                        var22 = -0.053811993;
                    }
                } else {
                    if (input[6] < 1.2545375) {
                        var22 = -0.05066649;
                    } else {
                        var22 = 0.021251338;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[5] < 0.07409769) {
                    if (input[0] < -1.2773666) {
                        var22 = 0.0594909;
                    } else {
                        var22 = -0.014107173;
                    }
                } else {
                    if (input[5] < 0.41578928) {
                        var22 = 0.05587129;
                    } else {
                        var22 = 0.06786389;
                    }
                }
            } else {
                if (input[3] < 1.4120835) {
                    var22 = -0.056045536;
                } else {
                    var22 = -0.05166076;
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[5] < 0.39438874) {
                if (input[7] < 1.3186984) {
                    if (input[2] < -0.74347) {
                        var22 = -0.037346795;
                    } else {
                        var22 = -0.05011782;
                    }
                } else {
                    if (input[7] < 2.3772779) {
                        var22 = 0.038144097;
                    } else {
                        var22 = -0.057685316;
                    }
                }
            } else {
                if (input[5] < 1.2520027) {
                    if (input[7] < 1.5600548) {
                        var22 = -0.007882732;
                    } else {
                        var22 = 0.045735925;
                    }
                } else {
                    if (input[6] < -0.53822607) {
                        var22 = -0.06816278;
                    } else {
                        var22 = 0.06234534;
                    }
                }
            }
        } else {
            if (input[3] < 2.1654973) {
                if (input[0] < 1.5049042) {
                    if (input[6] < -0.27517426) {
                        var22 = -0.050619606;
                    } else {
                        var22 = -0.053879865;
                    }
                } else {
                    var22 = -0.05147405;
                }
            } else {
                if (input[1] < 2.4506528) {
                    var22 = -0.05116395;
                } else {
                    var22 = -0.050542157;
                }
            }
        }
    }
    double var23;
    if (input[1] < 1.3463372) {
        if (input[1] < 0.8440511) {
            if (input[1] < 0.23779523) {
                var23 = -0.05062278;
            } else {
                var23 = -0.051226277;
            }
        } else {
            if (input[0] < 0.04633228) {
                if (input[1] < 1.2797261) {
                    var23 = -0.051638763;
                } else {
                    if (input[7] < 2.4166398) {
                        var23 = -0.015172529;
                    } else {
                        var23 = -0.050461046;
                    }
                }
            } else {
                if (input[0] < 1.5049042) {
                    var23 = -0.052789886;
                } else {
                    var23 = -0.054181382;
                }
            }
        }
    } else {
        if (input[2] < -1.833067) {
            if (input[1] < 3.2012215) {
                if (input[4] < 3.3627214) {
                    if (input[5] < 1.3567985) {
                        var23 = 0.055492654;
                    } else {
                        var23 = 0.039326392;
                    }
                } else {
                    if (input[8] < -1.0072714) {
                        var23 = 0.0610486;
                    } else {
                        var23 = 0.06973985;
                    }
                }
            } else {
                if (input[1] < 4.6108503) {
                    if (input[5] < 4.646677) {
                        var23 = 0.06213648;
                    } else {
                        var23 = 0.04860914;
                    }
                } else {
                    if (input[5] < 5.826247) {
                        var23 = 0.06893831;
                    } else {
                        var23 = 0.06375632;
                    }
                }
            }
        } else {
            if (input[2] < -1.355827) {
                if (input[4] < 2.9273717) {
                    if (input[1] < 2.326356) {
                        var23 = 0.054292038;
                    } else {
                        var23 = 0.065795474;
                    }
                } else {
                    if (input[0] < 1.4222157) {
                        var23 = 0.0722927;
                    } else {
                        var23 = 0.06742135;
                    }
                }
            } else {
                if (input[0] < 2.067515) {
                    if (input[8] < -0.9945944) {
                        var23 = 0.071304075;
                    } else {
                        var23 = 0.07715492;
                    }
                } else {
                    if (input[5] < 0.41578928) {
                        var23 = -0.06769157;
                    } else {
                        var23 = 0.06904616;
                    }
                }
            }
        }
    }
    double var24;
    if (input[5] < 0.3717797) {
        if (input[0] < -1.5295253) {
            if (input[5] < -0.21765058) {
                if (input[4] < -0.16056372) {
                    if (input[2] < -0.48212343) {
                        var24 = 0.08207908;
                    } else {
                        var24 = 0.066128656;
                    }
                } else {
                    if (input[2] < -1.0960267) {
                        var24 = -0.045133546;
                    } else {
                        var24 = 0.07622513;
                    }
                }
            } else {
                if (input[3] < 0.42321396) {
                    if (input[2] < -0.40193808) {
                        var24 = -0.04384237;
                    } else {
                        var24 = 0.09481948;
                    }
                } else {
                    if (input[4] < 0.7987067) {
                        var24 = 0.091051154;
                    } else {
                        var24 = -0.020311961;
                    }
                }
            }
        } else {
            if (input[2] < -0.30732393) {
                if (input[6] < 0.6105327) {
                    if (input[2] < -2.0047894) {
                        var24 = 0.019861283;
                    } else {
                        var24 = 0.059008174;
                    }
                } else {
                    if (input[3] < -0.003152875) {
                        var24 = -0.028645169;
                    } else {
                        var24 = 0.029572437;
                    }
                }
            } else {
                if (input[0] < -0.8048311) {
                    if (input[6] < 0.6229602) {
                        var24 = 0.067281716;
                    } else {
                        var24 = -0.006085396;
                    }
                } else {
                    if (input[1] < 1.7709974) {
                        var24 = 0.06525664;
                    } else {
                        var24 = -0.05038515;
                    }
                }
            }
        }
    } else {
        if (input[4] < 1.2889661) {
            if (input[0] < -0.71952313) {
                if (input[0] < -1.3028098) {
                    if (input[4] < 0.35266468) {
                        var24 = -0.019001342;
                    } else {
                        var24 = -0.047187198;
                    }
                } else {
                    if (input[6] < 0.0067897188) {
                        var24 = 0.07822825;
                    } else {
                        var24 = -0.040619195;
                    }
                }
            } else {
                if (input[1] < 0.87503827) {
                    if (input[6] < 0.10035754) {
                        var24 = 0.07937918;
                    } else {
                        var24 = 0.034189176;
                    }
                } else {
                    if (input[1] < 1.4828581) {
                        var24 = -0.0044991137;
                    } else {
                        var24 = -0.032274418;
                    }
                }
            }
        } else {
            if (input[2] < 0.05297581) {
                if (input[0] < -0.39321092) {
                    if (input[2] < -0.37063894) {
                        var24 = -0.048697438;
                    } else {
                        var24 = -0.028208;
                    }
                } else {
                    if (input[4] < 2.6368508) {
                        var24 = -0.021398649;
                    } else {
                        var24 = -0.0445179;
                    }
                }
            } else {
                if (input[1] < 0.30805492) {
                    if (input[6] < 1.8485208) {
                        var24 = 0.07737889;
                    } else {
                        var24 = 0.021408971;
                    }
                } else {
                    if (input[5] < 1.5348442) {
                        var24 = 0.07128458;
                    } else {
                        var24 = -0.04368514;
                    }
                }
            }
        }
    }
    double var25;
    if (input[0] < -0.7813698) {
        if (input[5] < -0.013142681) {
            if (input[2] < -0.6793288) {
                if (input[1] < -0.39385986) {
                    if (input[8] < -0.8737145) {
                        var25 = 0.060273975;
                    } else {
                        var25 = -0.05347162;
                    }
                } else {
                    if (input[7] < 0.9519198) {
                        var25 = -0.043526005;
                    } else {
                        var25 = 0.068608195;
                    }
                }
            } else {
                if (input[5] < -0.16327175) {
                    if (input[2] < -0.42880416) {
                        var25 = -0.00527695;
                    } else {
                        var25 = -0.048859708;
                    }
                } else {
                    if (input[8] < -0.8592824) {
                        var25 = -0.044118214;
                    } else {
                        var25 = 0.011250744;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[5] < 0.39438874) {
                    if (input[0] < -1.2773666) {
                        var25 = 0.06134342;
                    } else {
                        var25 = 0.019179711;
                    }
                } else {
                    if (input[2] < -0.40193808) {
                        var25 = 0.06480222;
                    } else {
                        var25 = 0.05355237;
                    }
                }
            } else {
                if (input[3] < 1.4120835) {
                    var25 = -0.054783788;
                } else {
                    var25 = -0.05082313;
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[5] < 0.39438874) {
                if (input[7] < 1.3186984) {
                    if (input[2] < -0.76493245) {
                        var25 = -0.03547686;
                    } else {
                        var25 = -0.04913777;
                    }
                } else {
                    if (input[7] < 2.3772779) {
                        var25 = 0.035142638;
                    } else {
                        var25 = -0.056721862;
                    }
                }
            } else {
                if (input[5] < 1.238639) {
                    if (input[7] < 1.5600548) {
                        var25 = -0.00820056;
                    } else {
                        var25 = 0.042417906;
                    }
                } else {
                    if (input[0] < 0.36506343) {
                        var25 = 0.06390812;
                    } else {
                        var25 = 0.047791112;
                    }
                }
            }
        } else {
            if (input[3] < 2.1654973) {
                if (input[0] < 1.5049042) {
                    if (input[2] < -1.7949777) {
                        var25 = -0.05276223;
                    } else {
                        var25 = -0.051280074;
                    }
                } else {
                    var25 = -0.050532095;
                }
            } else {
                if (input[1] < 2.4989395) {
                    var25 = -0.05030516;
                } else {
                    var25 = -0.049654625;
                }
            }
        }
    }
    double var26;
    if (input[1] < 1.3463372) {
        if (input[3] < 0.98658097) {
            if (input[1] < 0.1938129) {
                var26 = -0.049740426;
            } else {
                var26 = -0.050232876;
            }
        } else {
            if (input[3] < 1.4120835) {
                if (input[1] < 1.2797261) {
                    var26 = -0.05094323;
                } else {
                    if (input[7] < 1.4071436) {
                        var26 = -0.006971704;
                    } else {
                        var26 = -0.05083834;
                    }
                }
            } else {
                if (input[6] < -2.2130756) {
                    var26 = -0.0066841654;
                } else {
                    if (input[0] < 1.5049042) {
                        var26 = -0.051877405;
                    } else {
                        var26 = -0.05344662;
                    }
                }
            }
        }
    } else {
        if (input[1] < 2.5473828) {
            if (input[3] < 1.6759915) {
                if (input[3] < 1.4120835) {
                    if (input[0] < -0.0125988005) {
                        var26 = 0.07656121;
                    } else {
                        var26 = 0.06952362;
                    }
                } else {
                    if (input[5] < 1.654912) {
                        var26 = 0.050484084;
                    } else {
                        var26 = 0.06667281;
                    }
                }
            } else {
                if (input[6] < -0.40349558) {
                    if (input[8] < -1.0183598) {
                        var26 = -0.055618837;
                    } else {
                        var26 = 0.06678702;
                    }
                } else {
                    if (input[6] < 1.084771) {
                        var26 = 0.045780838;
                    } else {
                        var26 = 0.06812116;
                    }
                }
            }
        } else {
            if (input[6] < 0.045781214) {
                if (input[6] < -1.1677841) {
                    var26 = 0.067438714;
                } else {
                    if (input[6] < -0.06638456) {
                        var26 = 0.06578329;
                    } else {
                        var26 = 0.0638417;
                    }
                }
            } else {
                if (input[1] < 4.8541236) {
                    if (input[6] < 0.6042332) {
                        var26 = 0.050150428;
                    } else {
                        var26 = 0.06330888;
                    }
                } else {
                    if (input[1] < 6.2633357) {
                        var26 = 0.062143728;
                    } else {
                        var26 = 0.06619745;
                    }
                }
            }
        }
    }
    double var27;
    if (input[5] < 0.3717797) {
        if (input[2] < -0.74347) {
            if (input[1] < -0.11518109) {
                if (input[1] < -0.38781208) {
                    if (input[8] < -0.88603127) {
                        var27 = -0.041834224;
                    } else {
                        var27 = 0.058650743;
                    }
                } else {
                    if (input[4] < 0.117171735) {
                        var27 = 0.045565836;
                    } else {
                        var27 = -0.025864279;
                    }
                }
            } else {
                if (input[7] < 1.3538029) {
                    if (input[8] < -0.96519125) {
                        var27 = 0.050162632;
                    } else {
                        var27 = 0.015134539;
                    }
                } else {
                    if (input[7] < 2.2024431) {
                        var27 = -0.009318158;
                    } else {
                        var27 = 0.07426582;
                    }
                }
            }
        } else {
            if (input[5] < 0.07409769) {
                if (input[6] < 1.1995361) {
                    if (input[7] < 1.0117439) {
                        var27 = 0.062577695;
                    } else {
                        var27 = 0.030814746;
                    }
                } else {
                    if (input[2] < 0.02173918) {
                        var27 = -0.026354868;
                    } else {
                        var27 = 0.06251025;
                    }
                }
            } else {
                if (input[6] < 0.7205521) {
                    if (input[1] < -0.43190384) {
                        var27 = 0.03370731;
                    } else {
                        var27 = 0.06350966;
                    }
                } else {
                    if (input[2] < 0.084040545) {
                        var27 = -0.022706337;
                    } else {
                        var27 = 0.06368402;
                    }
                }
            }
        }
    } else {
        if (input[4] < 1.8945342) {
            if (input[2] < -0.17182903) {
                if (input[1] < -0.053035874) {
                    if (input[4] < 0.32170585) {
                        var27 = 0.014176685;
                    } else {
                        var27 = -0.043760028;
                    }
                } else {
                    if (input[1] < 1.7998767) {
                        var27 = -0.004595733;
                    } else {
                        var27 = -0.032327298;
                    }
                }
            } else {
                if (input[6] < 1.1647528) {
                    if (input[5] < 0.7004639) {
                        var27 = 0.07162741;
                    } else {
                        var27 = 0.033002358;
                    }
                } else {
                    if (input[2] < 0.48357743) {
                        var27 = -0.03269467;
                    } else {
                        var27 = 0.075649396;
                    }
                }
            }
        } else {
            if (input[8] < -0.8260985) {
                if (input[4] < 2.6867108) {
                    if (input[1] < 0.96844196) {
                        var27 = -0.045165878;
                    } else {
                        var27 = -0.025268415;
                    }
                } else {
                    if (input[7] < -0.19052146) {
                        var27 = 0.13466896;
                    } else {
                        var27 = -0.044512622;
                    }
                }
            } else {
                if (input[2] < -0.20537838) {
                    if (input[1] < -0.37364784) {
                        var27 = 0.13488908;
                    } else {
                        var27 = -0.04388522;
                    }
                } else {
                    if (input[2] < 0.02173918) {
                        var27 = 0.12210275;
                    } else {
                        var27 = 0.07742665;
                    }
                }
            }
        }
    }
    double var28;
    if (input[0] < -0.76027143) {
        if (input[4] < -0.059971534) {
            if (input[2] < -0.40193808) {
                if (input[1] < -0.39088076) {
                    if (input[7] < 0.02766323) {
                        var28 = 0.057974547;
                    } else {
                        var28 = -0.020412989;
                    }
                } else {
                    if (input[7] < 2.0830097) {
                        var28 = -0.054842696;
                    } else {
                        var28 = 0.05779777;
                    }
                }
            } else {
                if (input[4] < -0.16056372) {
                    if (input[2] < -0.24199861) {
                        var28 = -0.043644313;
                    } else {
                        var28 = -0.049295824;
                    }
                } else {
                    if (input[1] < -0.41408536) {
                        var28 = -0.0038947486;
                    } else {
                        var28 = -0.046226982;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[4] < 0.49741524) {
                    if (input[0] < -1.2773666) {
                        var28 = 0.055066176;
                    } else {
                        var28 = 0.008850904;
                    }
                } else {
                    if (input[2] < -0.20537838) {
                        var28 = 0.061801758;
                    } else {
                        var28 = 0.023635484;
                    }
                }
            } else {
                if (input[3] < 1.4120835) {
                    var28 = -0.05343724;
                } else {
                    var28 = -0.05000625;
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[4] < 0.6836169) {
                if (input[3] < 1.6456834) {
                    if (input[7] < 1.1349273) {
                        var28 = -0.047730025;
                    } else {
                        var28 = -0.011164744;
                    }
                } else {
                    if (input[7] < 2.5893478) {
                        var28 = 0.060521707;
                    } else {
                        var28 = -0.060096595;
                    }
                }
            } else {
                if (input[4] < 1.8737624) {
                    if (input[7] < 1.5600548) {
                        var28 = -0.002025753;
                    } else {
                        var28 = 0.0386406;
                    }
                } else {
                    if (input[7] < -0.19052146) {
                        var28 = -0.049851466;
                    } else {
                        var28 = 0.060365636;
                    }
                }
            }
        } else {
            if (input[1] < 2.0677018) {
                if (input[0] < 1.5049042) {
                    if (input[3] < 2.1654973) {
                        var28 = -0.0512633;
                    } else {
                        var28 = -0.049845986;
                    }
                } else {
                    var28 = -0.049817927;
                }
            } else {
                if (input[1] < 2.5473828) {
                    var28 = -0.04943945;
                } else {
                    var28 = -0.048874687;
                }
            }
        }
    }
    double var29;
    if (input[1] < 1.3463372) {
        if (input[3] < 0.98658097) {
            if (input[1] < 0.14221843) {
                var29 = -0.04893366;
            } else {
                var29 = -0.049388494;
            }
        } else {
            if (input[3] < 1.4120835) {
                if (input[1] < 1.2797261) {
                    var29 = -0.050115813;
                } else {
                    if (input[2] < -2.4107285) {
                        var29 = 0.06559343;
                    } else {
                        var29 = -0.04814834;
                    }
                }
            } else {
                if (input[6] < -2.2130756) {
                    var29 = -0.013431463;
                } else {
                    if (input[0] < 1.5049042) {
                        var29 = -0.050994556;
                    } else {
                        var29 = -0.052488945;
                    }
                }
            }
        }
    } else {
        if (input[2] < -1.833067) {
            if (input[1] < 3.2012215) {
                if (input[6] < -0.4563132) {
                    if (input[4] < 0.75227654) {
                        var29 = 0.0072172484;
                    } else {
                        var29 = 0.064285375;
                    }
                } else {
                    if (input[4] < 3.8737252) {
                        var29 = 0.0390736;
                    } else {
                        var29 = 0.05958857;
                    }
                }
            } else {
                if (input[1] < 4.8541236) {
                    if (input[6] < 0.10035754) {
                        var29 = 0.06272371;
                    } else {
                        var29 = 0.04901778;
                    }
                } else {
                    if (input[6] < 0.71290267) {
                        var29 = 0.06308322;
                    } else {
                        var29 = 0.059154395;
                    }
                }
            }
        } else {
            if (input[2] < -1.355827) {
                if (input[6] < -0.03500452) {
                    if (input[4] < 1.2221057) {
                        var29 = 0.05541376;
                    } else {
                        var29 = 0.06373782;
                    }
                } else {
                    if (input[1] < 3.128257) {
                        var29 = 0.0494349;
                    } else {
                        var29 = 0.06107693;
                    }
                }
            } else {
                if (input[6] < 0.8298272) {
                    if (input[4] < 0.6836169) {
                        var29 = 0.04648231;
                    } else {
                        var29 = 0.0626775;
                    }
                } else {
                    if (input[3] < 1.3458711) {
                        var29 = 0.0696225;
                    } else {
                        var29 = 0.06500765;
                    }
                }
            }
        }
    }
    double var30;
    if (input[2] < -0.3393093) {
        if (input[0] < -1.1575596) {
            if (input[2] < -0.6793288) {
                if (input[6] < -2.5654123) {
                    var30 = 0.10108345;
                } else {
                    if (input[0] < -1.7286664) {
                        var30 = -0.047094703;
                    } else {
                        var30 = -0.042860664;
                    }
                }
            } else {
                if (input[6] < 0.59192634) {
                    if (input[7] < -0.170372) {
                        var30 = 0.03377584;
                    } else {
                        var30 = -0.015873563;
                    }
                } else {
                    if (input[7] < -0.40992263) {
                        var30 = 0.10749774;
                    } else {
                        var30 = -0.042191163;
                    }
                }
            }
        } else {
            if (input[1] < 2.1048353) {
                if (input[7] < 0.85655856) {
                    if (input[6] < 1.131379) {
                        var30 = 0.033868156;
                    } else {
                        var30 = -0.040384214;
                    }
                } else {
                    if (input[0] < -0.34330863) {
                        var30 = -0.039413217;
                    } else {
                        var30 = -0.010473147;
                    }
                }
            } else {
                if (input[6] < -0.013923333) {
                    if (input[6] < -0.10942445) {
                        var30 = -0.048335124;
                    } else {
                        var30 = -0.043717507;
                    }
                } else {
                    if (input[1] < 4.272838) {
                        var30 = -0.026540222;
                    } else {
                        var30 = -0.04476464;
                    }
                }
            }
        }
    } else {
        if (input[1] < 0.9377513) {
            if (input[2] < 0.02173918) {
                if (input[6] < 0.8209485) {
                    if (input[0] < -0.42782572) {
                        var30 = 0.04445018;
                    } else {
                        var30 = 0.06374892;
                    }
                } else {
                    if (input[0] < -0.40506858) {
                        var30 = -0.03263721;
                    } else {
                        var30 = 0.013158671;
                    }
                }
            } else {
                if (input[7] < -0.23059355) {
                    if (input[2] < 0.11512014) {
                        var30 = 0.057143126;
                    } else {
                        var30 = 0.060448006;
                    }
                } else {
                    if (input[6] < 1.1822628) {
                        var30 = 0.058831077;
                    } else {
                        var30 = 0.022316355;
                    }
                }
            }
        } else {
            if (input[1] < 1.4828581) {
                if (input[6] < 0.2027276) {
                    if (input[6] < -1.411528) {
                        var30 = -0.029040858;
                    } else {
                        var30 = 0.099626034;
                    }
                } else {
                    if (input[0] < 0.946891) {
                        var30 = -0.0479311;
                    } else {
                        var30 = -0.013723943;
                    }
                }
            } else {
                if (input[0] < -0.2255513) {
                    var30 = 0.010491356;
                } else {
                    if (input[7] < 0.09212099) {
                        var30 = -0.012104308;
                    } else {
                        var30 = -0.0481853;
                    }
                }
            }
        }
    }
    double var31;
    if (input[0] < -0.69675535) {
        if (input[5] < 0.007825906) {
            if (input[2] < -0.7010482) {
                if (input[0] < -1.3282267) {
                    if (input[6] < -0.22590312) {
                        var31 = -0.056708258;
                    } else {
                        var31 = 0.054745376;
                    }
                } else {
                    if (input[3] < -0.11250562) {
                        var31 = 0.052702773;
                    } else {
                        var31 = -0.038015265;
                    }
                }
            } else {
                if (input[6] < 1.2912512) {
                    if (input[2] < -0.40193808) {
                        var31 = -0.01704494;
                    } else {
                        var31 = -0.047755904;
                    }
                } else {
                    if (input[3] < -0.4208889) {
                        var31 = -0.054043777;
                    } else {
                        var31 = 0.07005979;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[5] < 0.3466449) {
                    if (input[0] < -1.2494789) {
                        var31 = 0.055112794;
                    } else {
                        var31 = 0.015505055;
                    }
                } else {
                    if (input[2] < -0.17182903) {
                        var31 = 0.059310853;
                    } else {
                        var31 = 0.035111163;
                    }
                }
            } else {
                var31 = -0.050781123;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[5] < 0.39438874) {
                if (input[2] < -1.88922) {
                    if (input[2] < -2.2665179) {
                        var31 = 0.0022902878;
                    } else {
                        var31 = 0.044471897;
                    }
                } else {
                    if (input[3] < 1.378464) {
                        var31 = -0.047320455;
                    } else {
                        var31 = 0.053724173;
                    }
                }
            } else {
                if (input[6] < 0.10903511) {
                    if (input[5] < 0.9520731) {
                        var31 = -0.050415907;
                    } else {
                        var31 = 0.025880007;
                    }
                } else {
                    if (input[5] < 1.391883) {
                        var31 = 0.030049218;
                    } else {
                        var31 = 0.054320414;
                    }
                }
            }
        } else {
            if (input[1] < 2.1760461) {
                if (input[6] < -0.27517426) {
                    var31 = -0.048316173;
                } else {
                    if (input[0] < 1.5049042) {
                        var31 = -0.050318893;
                    } else {
                        var31 = -0.049118094;
                    }
                }
            } else {
                var31 = -0.04822161;
            }
        }
    }
    double var32;
    if (input[1] < 1.3463372) {
        if (input[1] < 0.8115792) {
            if (input[1] < 0.23779523) {
                var32 = -0.048213266;
            } else {
                if (input[0] < -0.7813698) {
                    var32 = -0.04823878;
                } else {
                    var32 = -0.049070433;
                }
            }
        } else {
            if (input[0] < -0.5077126) {
                if (input[1] < 1.2797261) {
                    var32 = -0.048724484;
                } else {
                    if (input[2] < -2.228495) {
                        var32 = -0.04681831;
                    } else {
                        var32 = 0.043639828;
                    }
                }
            } else {
                if (input[0] < 1.5049042) {
                    if (input[1] < 1.2797261) {
                        var32 = -0.050180137;
                    } else {
                        var32 = -0.04819327;
                    }
                } else {
                    var32 = -0.0512755;
                }
            }
        }
    } else {
        if (input[2] < -1.833067) {
            if (input[1] < 3.2012215) {
                if (input[6] < -0.5164247) {
                    if (input[4] < 0.7293369) {
                        var32 = -0.0033773386;
                    } else {
                        var32 = 0.062184267;
                    }
                } else {
                    if (input[4] < 3.9512398) {
                        var32 = 0.036513828;
                    } else {
                        var32 = 0.057603702;
                    }
                }
            } else {
                if (input[6] < 0.14144441) {
                    if (input[6] < -0.056063637) {
                        var32 = 0.06118061;
                    } else {
                        var32 = 0.058465157;
                    }
                } else {
                    if (input[1] < 6.2633357) {
                        var32 = 0.047722857;
                    } else {
                        var32 = 0.06083506;
                    }
                }
            }
        } else {
            if (input[2] < -1.355827) {
                if (input[6] < -0.02460529) {
                    if (input[4] < 1.1500456) {
                        var32 = 0.051682293;
                    } else {
                        var32 = 0.061225038;
                    }
                } else {
                    if (input[1] < 2.9257214) {
                        var32 = 0.04649492;
                    } else {
                        var32 = 0.05798949;
                    }
                }
            } else {
                if (input[6] < 0.812421) {
                    if (input[4] < 0.6836169) {
                        var32 = 0.042236485;
                    } else {
                        var32 = 0.060069583;
                    }
                } else {
                    if (input[4] < 2.4887815) {
                        var32 = 0.064185426;
                    } else {
                        var32 = 0.061570447;
                    }
                }
            }
        }
    }
    double var33;
    if (input[5] < 0.3717797) {
        if (input[0] < -1.5579753) {
            if (input[5] < -0.21765058) {
                if (input[0] < -2.21599) {
                    if (input[3] < -0.15205684) {
                        var33 = -0.03423415;
                    } else {
                        var33 = 0.066007406;
                    }
                } else {
                    if (input[6] < -1.9588077) {
                        var33 = 0.058518536;
                    } else {
                        var33 = 0.0740227;
                    }
                }
            } else {
                if (input[3] < 0.4066645) {
                    if (input[2] < -0.558006) {
                        var33 = -0.041310735;
                    } else {
                        var33 = 0.033175778;
                    }
                } else {
                    if (input[6] < -1.5999739) {
                        var33 = -0.032368608;
                    } else {
                        var33 = 0.09154376;
                    }
                }
            }
        } else {
            if (input[7] < 1.1724008) {
                if (input[0] < -0.939921) {
                    if (input[6] < 0.6229602) {
                        var33 = 0.05118071;
                    } else {
                        var33 = -0.020631563;
                    }
                } else {
                    if (input[5] < 0.07409769) {
                        var33 = 0.05802383;
                    } else {
                        var33 = 0.05219268;
                    }
                }
            } else {
                if (input[6] < 0.5855442) {
                    if (input[0] < 0.6494735) {
                        var33 = 0.048077438;
                    } else {
                        var33 = -0.0021324295;
                    }
                } else {
                    if (input[2] < -2.5455425) {
                        var33 = 0.06950579;
                    } else {
                        var33 = -0.03125462;
                    }
                }
            }
        }
    } else {
        if (input[0] < -0.67573476) {
            if (input[2] < -0.40193808) {
                if (input[6] < -2.5654123) {
                    var33 = 0.10700721;
                } else {
                    if (input[5] < 0.58312446) {
                        var33 = -0.0375682;
                    } else {
                        var33 = -0.045813203;
                    }
                }
            } else {
                if (input[6] < -0.6367732) {
                    if (input[2] < -0.10417372) {
                        var33 = 0.13744064;
                    } else {
                        var33 = 0.079923406;
                    }
                } else {
                    if (input[5] < 0.68466944) {
                        var33 = -0.008645169;
                    } else {
                        var33 = -0.0395232;
                    }
                }
            }
        } else {
            if (input[5] < 1.4894421) {
                if (input[3] < 1.7059771) {
                    if (input[6] < 0.10903511) {
                        var33 = 0.0570504;
                    } else {
                        var33 = 0.010575778;
                    }
                } else {
                    if (input[7] < 2.3016891) {
                        var33 = -0.027891116;
                    } else {
                        var33 = -0.0051315534;
                    }
                }
            } else {
                if (input[2] < -1.8515974) {
                    if (input[3] < 3.8222976) {
                        var33 = -0.016766515;
                    } else {
                        var33 = -0.042200737;
                    }
                } else {
                    if (input[5] < 2.0169249) {
                        var33 = -0.029937847;
                    } else {
                        var33 = -0.043352365;
                    }
                }
            }
        }
    }
    double var34;
    if (input[0] < -0.69675535) {
        if (input[5] < 0.007825906) {
            if (input[6] < 0.31282315) {
                if (input[0] < -1.7592409) {
                    if (input[5] < -0.1270127) {
                        var34 = -0.059314005;
                    } else {
                        var34 = 0.055961218;
                    }
                } else {
                    if (input[1] < 0.1938129) {
                        var34 = -0.045955606;
                    } else {
                        var34 = 0.045160785;
                    }
                }
            } else {
                if (input[0] < -0.96548903) {
                    if (input[3] < -0.4208889) {
                        var34 = -0.05458291;
                    } else {
                        var34 = 0.039815333;
                    }
                } else {
                    if (input[6] < 1.1156986) {
                        var34 = -0.041511197;
                    } else {
                        var34 = 0.025702428;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[4] < 0.5475403) {
                    if (input[6] < -0.013923333) {
                        var34 = -0.00070729933;
                    } else {
                        var34 = 0.047122948;
                    }
                } else {
                    if (input[8] < -0.6008304) {
                        var34 = 0.057086784;
                    } else {
                        var34 = -0.048367277;
                    }
                }
            } else {
                var34 = -0.05001459;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[5] < 0.39438874) {
                if (input[3] < 0.8649154) {
                    if (input[5] < 0.07409769) {
                        var34 = -0.04720155;
                    } else {
                        var34 = -0.040509902;
                    }
                } else {
                    if (input[0] < 0.5298322) {
                        var34 = -0.0026306473;
                    } else {
                        var34 = 0.03758959;
                    }
                }
            } else {
                if (input[4] < 1.8299265) {
                    if (input[6] < 0.0067897188) {
                        var34 = -0.043038655;
                    } else {
                        var34 = 0.02343394;
                    }
                } else {
                    if (input[6] < -0.5164247) {
                        var34 = -0.07792891;
                    } else {
                        var34 = 0.054491494;
                    }
                }
            }
        } else {
            if (input[1] < 2.2494037) {
                if (input[6] < -0.27517426) {
                    var34 = -0.04759673;
                } else {
                    if (input[0] < 1.5049042) {
                        var34 = -0.049534764;
                    } else {
                        var34 = -0.04839831;
                    }
                }
            } else {
                var34 = -0.04754615;
            }
        }
    }
    double var35;
    if (input[0] < 0.8745379) {
        if (input[8] < -1.0098953) {
            if (input[8] < -1.0104756) {
                if (input[4] < 1.2889661) {
                    if (input[0] < 0.42093349) {
                        var35 = 0.006231404;
                    } else {
                        var35 = 0.048004407;
                    }
                } else {
                    if (input[0] < -2.368915) {
                        var35 = -0.028563159;
                    } else {
                        var35 = 0.051757496;
                    }
                }
            } else {
                if (input[2] < -1.9530027) {
                    if (input[5] < 0.778336) {
                        var35 = -0.029902607;
                    } else {
                        var35 = 0.00508485;
                    }
                } else {
                    if (input[4] < 2.2760596) {
                        var35 = 0.031035863;
                    } else {
                        var35 = 0.05868945;
                    }
                }
            }
        } else {
            if (input[8] < -1.0001874) {
                if (input[2] < -1.7949777) {
                    if (input[6] < -0.61161494) {
                        var35 = 0.025287358;
                    } else {
                        var35 = -0.036671977;
                    }
                } else {
                    if (input[6] < -0.42002866) {
                        var35 = 0.05959356;
                    } else {
                        var35 = 0.008354823;
                    }
                }
            } else {
                if (input[8] < -0.9897808) {
                    if (input[6] < -0.3711222) {
                        var35 = 0.0006859056;
                    } else {
                        var35 = -0.042059243;
                    }
                } else {
                    if (input[0] < 0.44989353) {
                        var35 = -0.047437172;
                    } else {
                        var35 = -0.043945882;
                    }
                }
            }
        }
    } else {
        if (input[5] < 2.0968094) {
            if (input[8] < -1.009096) {
                if (input[8] < -1.0113493) {
                    if (input[6] < -0.5164247) {
                        var35 = 0.060684737;
                    } else {
                        var35 = 0.049364176;
                    }
                } else {
                    if (input[7] < 2.3772779) {
                        var35 = 0.04576978;
                    } else {
                        var35 = 0.011181597;
                    }
                }
            } else {
                if (input[0] < 1.6390834) {
                    if (input[8] < -1.0019864) {
                        var35 = 0.002304318;
                    } else {
                        var35 = -0.028543273;
                    }
                } else {
                    if (input[6] < 1.0027797) {
                        var35 = 0.022864083;
                    } else {
                        var35 = 0.059934195;
                    }
                }
            }
        } else {
            if (input[6] < 0.14144441) {
                if (input[8] < -0.98729527) {
                    if (input[4] < 0.75227654) {
                        var35 = -0.07481057;
                    } else {
                        var35 = 0.058005717;
                    }
                } else {
                    if (input[0] < 3.0979455) {
                        var35 = -0.046896297;
                    } else {
                        var35 = 0.056294356;
                    }
                }
            } else {
                if (input[0] < 2.067515) {
                    if (input[8] < -1.0016972) {
                        var35 = 0.039284073;
                    } else {
                        var35 = -0.008937333;
                    }
                } else {
                    if (input[2] < -1.7663244) {
                        var35 = 0.044880882;
                    } else {
                        var35 = 0.05574845;
                    }
                }
            }
        }
    }
    double var36;
    if (input[4] < 0.5475403) {
        if (input[0] < -1.5579753) {
            if (input[2] < -0.5850242) {
                if (input[3] < 0.42321396) {
                    if (input[4] < -0.13455336) {
                        var36 = 0.008426553;
                    } else {
                        var36 = -0.03961536;
                    }
                } else {
                    if (input[4] < 0.44063616) {
                        var36 = 0.10385411;
                    } else {
                        var36 = 0.0035741725;
                    }
                }
            } else {
                if (input[4] < -0.16056372) {
                    var36 = 0.0575623;
                } else {
                    if (input[4] < 0.5222699) {
                        var36 = 0.09646;
                    } else {
                        var36 = 0.0013168829;
                    }
                }
            }
        } else {
            if (input[3] < 1.791475) {
                if (input[0] < -0.88397586) {
                    if (input[6] < 0.6229602) {
                        var36 = 0.053747907;
                    } else {
                        var36 = -0.020396905;
                    }
                } else {
                    if (input[3] < 0.98658097) {
                        var36 = 0.055680506;
                    } else {
                        var36 = 0.025565105;
                    }
                }
            } else {
                if (input[7] < 2.2024431) {
                    if (input[6] < 0.28611422) {
                        var36 = 0.048032116;
                    } else {
                        var36 = -0.040613614;
                    }
                } else {
                    if (input[6] < -1.411528) {
                        var36 = -0.049375992;
                    } else {
                        var36 = 0.090424195;
                    }
                }
            }
        }
    } else {
        if (input[2] < -0.072270796) {
            if (input[4] < 2.0740442) {
                if (input[0] < -0.6359057) {
                    if (input[0] < -1.2185669) {
                        var36 = -0.044814777;
                    } else {
                        var36 = -0.03211887;
                    }
                } else {
                    if (input[3] < 2.0789537) {
                        var36 = 0.006766835;
                    } else {
                        var36 = -0.02438053;
                    }
                }
            } else {
                if (input[2] < -1.9170718) {
                    if (input[0] < 1.0150946) {
                        var36 = -0.04476983;
                    } else {
                        var36 = -0.027306944;
                    }
                } else {
                    if (input[4] < 3.1504886) {
                        var36 = -0.040213875;
                    } else {
                        var36 = -0.044689476;
                    }
                }
            }
        } else {
            if (input[3] < 0.6647161) {
                if (input[6] < 1.1647528) {
                    if (input[0] < -0.42782572) {
                        var36 = 0.027596388;
                    } else {
                        var36 = 0.064615004;
                    }
                } else {
                    if (input[2] < 0.48357743) {
                        var36 = -0.011579352;
                    } else {
                        var36 = 0.06420546;
                    }
                }
            } else {
                if (input[6] < 0.7205521) {
                    if (input[0] < 2.3466272) {
                        var36 = 0.051233437;
                    } else {
                        var36 = -0.043612055;
                    }
                } else {
                    if (input[8] < -0.98158354) {
                        var36 = -0.04759242;
                    } else {
                        var36 = -0.030923849;
                    }
                }
            }
        }
    }
    double var37;
    if (input[1] < 1.3463372) {
        if (input[2] < -0.24199861) {
            if (input[4] < 0.82070357) {
                if (input[1] < -0.31262922) {
                    if (input[5] < -0.013142681) {
                        var37 = 0.022146696;
                    } else {
                        var37 = 0.05066482;
                    }
                } else {
                    if (input[7] < 1.1724008) {
                        var37 = -0.023052586;
                    } else {
                        var37 = 0.02383963;
                    }
                }
            } else {
                if (input[3] < 1.1023954) {
                    if (input[6] < 0.045781214) {
                        var37 = 0.045521762;
                    } else {
                        var37 = 0.055603202;
                    }
                } else {
                    if (input[4] < 2.3749502) {
                        var37 = 0.028253235;
                    } else {
                        var37 = 0.057654247;
                    }
                }
            }
        } else {
            if (input[5] < 0.6269806) {
                if (input[2] < 0.02173918) {
                    if (input[6] < 0.76057523) {
                        var37 = -0.045225006;
                    } else {
                        var37 = 0.03986228;
                    }
                } else {
                    if (input[4] < 0.03748571) {
                        var37 = -0.046837457;
                    } else {
                        var37 = -0.042048804;
                    }
                }
            } else {
                if (input[6] < 0.016482182) {
                    if (input[7] < -0.21024725) {
                        var37 = -0.044545744;
                    } else {
                        var37 = -0.0604807;
                    }
                } else {
                    if (input[2] < 0.3694625) {
                        var37 = 0.03799753;
                    } else {
                        var37 = -0.051239833;
                    }
                }
            }
        }
    } else {
        if (input[1] < 2.2494037) {
            if (input[6] < -0.27517426) {
                var37 = -0.04708902;
            } else {
                if (input[3] < 2.1428928) {
                    if (input[2] < -1.40704) {
                        var37 = -0.049249325;
                    } else {
                        var37 = -0.047968663;
                    }
                } else {
                    var37 = -0.04782863;
                }
            }
        } else {
            var37 = -0.046969503;
        }
    }
    double var38;
    if (input[1] < 1.3463372) {
        if (input[3] < 0.98658097) {
            if (input[1] < 0.12598425) {
                var38 = -0.046936512;
            } else {
                if (input[0] < -0.7813698) {
                    var38 = -0.046999525;
                } else {
                    if (input[1] < 1.2797261) {
                        var38 = -0.04779138;
                    } else {
                        var38 = -0.03203961;
                    }
                }
            }
        } else {
            if (input[3] < 1.4120835) {
                if (input[1] < 1.2797261) {
                    var38 = -0.04827439;
                } else {
                    if (input[7] < 1.4071436) {
                        var38 = 0.005882163;
                    } else {
                        var38 = -0.047973108;
                    }
                }
            } else {
                if (input[6] < -2.2130756) {
                    var38 = -0.013124668;
                } else {
                    if (input[0] < 1.5049042) {
                        var38 = -0.04919992;
                    } else {
                        var38 = -0.050777882;
                    }
                }
            }
        }
    } else {
        if (input[4] < 2.9273717) {
            if (input[6] < -0.5164247) {
                if (input[6] < -0.7188839) {
                    if (input[1] < 2.366574) {
                        var38 = 0.06049713;
                    } else {
                        var38 = 0.058490667;
                    }
                } else {
                    if (input[4] < 1.0383068) {
                        var38 = -0.035992768;
                    } else {
                        var38 = 0.056077275;
                    }
                }
            } else {
                if (input[6] < 1.0421718) {
                    if (input[8] < -1.0104756) {
                        var38 = 0.043528374;
                    } else {
                        var38 = 0.030253088;
                    }
                } else {
                    if (input[6] < 1.1006693) {
                        var38 = 0.051284533;
                    } else {
                        var38 = 0.059863303;
                    }
                }
            }
        } else {
            if (input[6] < 0.17229258) {
                if (input[6] < 0.036046036) {
                    if (input[1] < 2.1760461) {
                        var38 = 0.05821107;
                    } else {
                        var38 = 0.056761097;
                    }
                } else {
                    if (input[4] < 3.1224794) {
                        var38 = 0.04115614;
                    } else {
                        var38 = 0.055970278;
                    }
                }
            } else {
                if (input[1] < 6.2633357) {
                    if (input[3] < 2.4463286) {
                        var38 = 0.057393312;
                    } else {
                        var38 = 0.046074566;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var38 = 0.053728655;
                    } else {
                        var38 = 0.05696691;
                    }
                }
            }
        }
    }
    double var39;
    if (input[4] < 0.5475403) {
        if (input[0] < -1.5579753) {
            if (input[2] < -0.5850242) {
                if (input[8] < -0.99807274) {
                    if (input[8] < -0.9988443) {
                        var39 = 0.10770282;
                    } else {
                        var39 = 0.030639261;
                    }
                } else {
                    if (input[4] < -0.13455336) {
                        var39 = 0.011829127;
                    } else {
                        var39 = -0.038340557;
                    }
                }
            } else {
                if (input[4] < -0.16056372) {
                    var39 = 0.05580582;
                } else {
                    if (input[4] < 0.5222699) {
                        var39 = 0.08848824;
                    } else {
                        var39 = 0.0013644235;
                    }
                }
            }
        } else {
            if (input[1] < 0.676181) {
                if (input[0] < -0.88397586) {
                    if (input[6] < 0.7689391) {
                        var39 = 0.04952055;
                    } else {
                        var39 = -0.022703774;
                    }
                } else {
                    if (input[6] < 1.0027797) {
                        var39 = 0.054809593;
                    } else {
                        var39 = 0.049773924;
                    }
                }
            } else {
                if (input[6] < 0.6042332) {
                    if (input[6] < -1.411528) {
                        var39 = -0.046149533;
                    } else {
                        var39 = 0.028448662;
                    }
                } else {
                    if (input[2] < -2.531903) {
                        var39 = 0.03566797;
                    } else {
                        var39 = -0.035380144;
                    }
                }
            }
        }
    } else {
        if (input[2] < -0.13803713) {
            if (input[4] < 2.0963554) {
                if (input[0] < -0.6359057) {
                    if (input[0] < -1.1870382) {
                        var39 = -0.0441245;
                    } else {
                        var39 = -0.03132838;
                    }
                } else {
                    if (input[1] < 0.90770644) {
                        var39 = 0.023210933;
                    } else {
                        var39 = -0.014530081;
                    }
                }
            } else {
                if (input[2] < -1.9074583) {
                    if (input[0] < 1.0150946) {
                        var39 = -0.0441555;
                    } else {
                        var39 = -0.026587062;
                    }
                } else {
                    if (input[4] < 3.0935438) {
                        var39 = -0.039330807;
                    } else {
                        var39 = -0.043955363;
                    }
                }
            }
        } else {
            if (input[3] < 0.6363197) {
                if (input[6] < 1.1647528) {
                    if (input[0] < -0.42782572) {
                        var39 = 0.02397077;
                    } else {
                        var39 = 0.06270504;
                    }
                } else {
                    if (input[2] < 0.3694625) {
                        var39 = -0.020278517;
                    } else {
                        var39 = 0.049264994;
                    }
                }
            } else {
                if (input[1] < 1.4828581) {
                    if (input[6] < 0.29955012) {
                        var39 = 0.059159026;
                    } else {
                        var39 = -0.035706293;
                    }
                } else {
                    if (input[4] < 0.75227654) {
                        var39 = -0.033965234;
                    } else {
                        var39 = -0.046848577;
                    }
                }
            }
        }
    }
    double var40;
    if (input[1] < 1.3463372) {
        if (input[2] < -0.24199861) {
            if (input[4] < 0.82070357) {
                if (input[1] < -0.30539098) {
                    if (input[4] < 0.08949875) {
                        var40 = 0.023935927;
                    } else {
                        var40 = 0.049420413;
                    }
                } else {
                    if (input[7] < 1.2619704) {
                        var40 = -0.02186206;
                    } else {
                        var40 = 0.023329781;
                    }
                }
            } else {
                if (input[3] < 1.1023954) {
                    if (input[6] < -0.0036006148) {
                        var40 = 0.04307948;
                    } else {
                        var40 = 0.053688314;
                    }
                } else {
                    if (input[4] < 2.3749502) {
                        var40 = 0.026670339;
                    } else {
                        var40 = 0.05520886;
                    }
                }
            }
        } else {
            if (input[4] < 0.38151222) {
                if (input[2] < 0.02173918) {
                    if (input[6] < 0.6229602) {
                        var40 = -0.045997817;
                    } else {
                        var40 = 0.028442178;
                    }
                } else {
                    if (input[4] < 0.012990164) {
                        var40 = -0.046292976;
                    } else {
                        var40 = -0.043473523;
                    }
                }
            } else {
                if (input[6] < 1.131379) {
                    if (input[2] < 0.084040545) {
                        var40 = -0.0057163257;
                    } else {
                        var40 = -0.04259011;
                    }
                } else {
                    if (input[2] < 0.3694625) {
                        var40 = 0.05165519;
                    } else {
                        var40 = -0.03468456;
                    }
                }
            }
        }
    } else {
        if (input[1] < 2.2494037) {
            if (input[6] < -0.27517426) {
                var40 = -0.04650445;
            } else {
                if (input[3] < 2.1428928) {
                    if (input[2] < -1.3816439) {
                        var40 = -0.048584417;
                    } else {
                        var40 = -0.047308195;
                    }
                } else {
                    var40 = -0.047299284;
                }
            }
        } else {
            var40 = -0.046420105;
        }
    }
    double var41;
    if (input[1] < 1.3463372) {
        if (input[1] < 0.7440003) {
            if (input[1] < 0.21375905) {
                var41 = -0.046400037;
            } else {
                if (input[0] < -0.7813698) {
                    var41 = -0.04644641;
                } else {
                    var41 = -0.047288034;
                }
            }
        } else {
            if (input[0] < 0.31391355) {
                if (input[1] < 1.2797261) {
                    var41 = -0.047438297;
                } else {
                    if (input[8] < -1.0027871) {
                        var41 = -0.04360897;
                    } else {
                        var41 = -0.024276454;
                    }
                }
            } else {
                if (input[0] < 1.5049042) {
                    if (input[8] < -1.0042704) {
                        var41 = -0.049002986;
                    } else {
                        var41 = -0.047780275;
                    }
                } else {
                    var41 = -0.04966827;
                }
            }
        }
    } else {
        if (input[2] < -1.833067) {
            if (input[1] < 3.3481884) {
                if (input[4] < 3.0935438) {
                    if (input[5] < 1.6722903) {
                        var41 = 0.03745233;
                    } else {
                        var41 = 0.01866951;
                    }
                } else {
                    if (input[5] < 4.071096) {
                        var41 = 0.050576933;
                    } else {
                        var41 = 0.034084696;
                    }
                }
            } else {
                if (input[1] < 4.8541236) {
                    if (input[5] < 4.646677) {
                        var41 = 0.04849899;
                    } else {
                        var41 = 0.03276441;
                    }
                } else {
                    if (input[5] < 6.07121) {
                        var41 = 0.0550567;
                    } else {
                        var41 = 0.04932753;
                    }
                }
            }
        } else {
            if (input[2] < -1.355827) {
                if (input[4] < 2.9785826) {
                    if (input[1] < 2.326356) {
                        var41 = 0.03846956;
                    } else {
                        var41 = 0.051002115;
                    }
                } else {
                    if (input[0] < 1.5049042) {
                        var41 = 0.057584785;
                    } else {
                        var41 = 0.053191762;
                    }
                }
            } else {
                if (input[0] < 2.1556752) {
                    if (input[8] < -0.99407923) {
                        var41 = 0.0566101;
                    } else {
                        var41 = 0.06223137;
                    }
                } else {
                    if (input[5] < 0.41578928) {
                        var41 = -0.07046737;
                    } else {
                        var41 = 0.054508038;
                    }
                }
            }
        }
    }
    double var42;
    if (input[4] < 0.5475403) {
        if (input[0] < -1.5579753) {
            if (input[2] < -0.5850242) {
                if (input[3] < 0.4066645) {
                    if (input[4] < -0.10842057) {
                        var42 = 0.0025923601;
                    } else {
                        var42 = -0.03833752;
                    }
                } else {
                    if (input[1] < -0.039342016) {
                        var42 = 0.0155029595;
                    } else {
                        var42 = 0.10089378;
                    }
                }
            } else {
                if (input[4] < -0.16056372) {
                    var42 = 0.054466657;
                } else {
                    if (input[4] < 0.5222699) {
                        var42 = 0.088603236;
                    } else {
                        var42 = 0.0016535994;
                    }
                }
            }
        } else {
            if (input[1] < 0.676181) {
                if (input[0] < -0.88397586) {
                    if (input[3] < -0.4208889) {
                        var42 = 0.054634284;
                    } else {
                        var42 = 0.012938851;
                    }
                } else {
                    if (input[2] < -2.0869267) {
                        var42 = 0.03529066;
                    } else {
                        var42 = 0.052920856;
                    }
                }
            } else {
                if (input[7] < 2.1871905) {
                    if (input[3] < 1.8682779) {
                        var42 = -0.000035525904;
                    } else {
                        var42 = -0.0367231;
                    }
                } else {
                    if (input[2] < -1.8704858) {
                        var42 = 0.06941449;
                    } else {
                        var42 = -0.015226179;
                    }
                }
            }
        }
    } else {
        if (input[4] < 1.8945342) {
            if (input[0] < -0.67573476) {
                if (input[2] < -0.24199861) {
                    if (input[0] < -1.2494789) {
                        var42 = -0.043492205;
                    } else {
                        var42 = -0.030870857;
                    }
                } else {
                    if (input[8] < -0.6008304) {
                        var42 = 0.0001859138;
                    } else {
                        var42 = 0.06179538;
                    }
                }
            } else {
                if (input[1] < 0.90770644) {
                    if (input[7] < 1.8092021) {
                        var42 = 0.042848032;
                    } else {
                        var42 = -0.00554297;
                    }
                } else {
                    if (input[1] < 2.2129488) {
                        var42 = -0.0060892277;
                    } else {
                        var42 = -0.03331209;
                    }
                }
            }
        } else {
            if (input[4] < 2.6867108) {
                if (input[0] < 0.28843397) {
                    if (input[2] < -0.17182903) {
                        var42 = -0.04352335;
                    } else {
                        var42 = 0.032079034;
                    }
                } else {
                    if (input[1] < 3.2012215) {
                        var42 = -0.0024951424;
                    } else {
                        var42 = -0.038028028;
                    }
                }
            } else {
                if (input[7] < -0.010516959) {
                    if (input[2] < -0.85924846) {
                        var42 = -0.038266625;
                    } else {
                        var42 = 0.09915026;
                    }
                } else {
                    if (input[2] < -2.3433826) {
                        var42 = -0.031427316;
                    } else {
                        var42 = -0.04120571;
                    }
                }
            }
        }
    }
    double var43;
    if (input[0] < -0.67573476) {
        if (input[5] < 0.007825906) {
            if (input[6] < 0.31282315) {
                if (input[0] < -1.7592409) {
                    if (input[5] < -0.1270127) {
                        var43 = -0.0620151;
                    } else {
                        var43 = 0.051306844;
                    }
                } else {
                    if (input[1] < 0.1938129) {
                        var43 = -0.04381956;
                    } else {
                        var43 = 0.047357056;
                    }
                }
            } else {
                if (input[0] < -0.96548903) {
                    if (input[8] < -0.71863294) {
                        var43 = 0.0353858;
                    } else {
                        var43 = -0.053075094;
                    }
                } else {
                    if (input[6] < 1.0699776) {
                        var43 = -0.040660523;
                    } else {
                        var43 = 0.014547103;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[4] < 0.5475403) {
                    if (input[6] < -0.40349558) {
                        var43 = -0.033022333;
                    } else {
                        var43 = 0.037972063;
                    }
                } else {
                    if (input[8] < -0.6008304) {
                        var43 = 0.05189487;
                    } else {
                        var43 = -0.044034895;
                    }
                }
            } else {
                var43 = -0.04824084;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[4] < 0.6836169) {
                if (input[1] < 0.676181) {
                    if (input[7] < 1.7684822) {
                        var43 = -0.04454696;
                    } else {
                        var43 = 0.00403106;
                    }
                } else {
                    if (input[8] < -1.0087589) {
                        var43 = 0.059686065;
                    } else {
                        var43 = -0.0016014869;
                    }
                }
            } else {
                if (input[4] < 1.8737624) {
                    if (input[6] < 0.0067897188) {
                        var43 = -0.03699397;
                    } else {
                        var43 = 0.022483077;
                    }
                } else {
                    if (input[6] < -0.5164247) {
                        var43 = -0.08102526;
                    } else {
                        var43 = 0.048820205;
                    }
                }
            }
        } else {
            if (input[1] < 2.2494037) {
                if (input[6] < -0.27517426) {
                    var43 = -0.045977406;
                } else {
                    if (input[0] < 1.5049042) {
                        var43 = -0.04781635;
                    } else {
                        var43 = -0.046770502;
                    }
                }
            } else {
                var43 = -0.045908716;
            }
        }
    }
    double var44;
    if (input[1] < 1.3463372) {
        if (input[1] < 0.7440003) {
            if (input[1] < 0.17705704) {
                var44 = -0.045895085;
            } else {
                var44 = -0.046452004;
            }
        } else {
            if (input[0] < 0.31391355) {
                if (input[1] < 1.2797261) {
                    var44 = -0.04690256;
                } else {
                    if (input[7] < 2.396799) {
                        var44 = -0.028556434;
                    } else {
                        var44 = -0.04588523;
                    }
                }
            } else {
                var44 = -0.048191972;
            }
        }
    } else {
        if (input[4] < 2.9273717) {
            if (input[2] < -1.5667169) {
                if (input[8] < -1.0101902) {
                    if (input[1] < 4.4960747) {
                        var44 = 0.038267802;
                    } else {
                        var44 = 0.05243763;
                    }
                } else {
                    if (input[7] < 2.3016891) {
                        var44 = 0.03311603;
                    } else {
                        var44 = 0.008571165;
                    }
                }
            } else {
                if (input[2] < -1.1946733) {
                    if (input[1] < 2.2881737) {
                        var44 = 0.04133153;
                    } else {
                        var44 = 0.051823143;
                    }
                } else {
                    if (input[0] < 1.1774455) {
                        var44 = 0.05811063;
                    } else {
                        var44 = 0.053860195;
                    }
                }
            }
        } else {
            if (input[2] < -2.422099) {
                if (input[7] < 2.1434345) {
                    if (input[5] < 6.3719172) {
                        var44 = 0.02303524;
                    } else {
                        var44 = -0.07484545;
                    }
                } else {
                    if (input[1] < 5.9838347) {
                        var44 = 0.04105584;
                    } else {
                        var44 = 0.05380353;
                    }
                }
            } else {
                if (input[2] < -1.6885362) {
                    if (input[1] < 6.2633357) {
                        var44 = 0.04794666;
                    } else {
                        var44 = 0.0538694;
                    }
                } else {
                    if (input[0] < 2.8639526) {
                        var44 = 0.054301422;
                    } else {
                        var44 = 0.05238101;
                    }
                }
            }
        }
    }
    double var45;
    if (input[5] < 0.3717797) {
        if (input[0] < -1.5295253) {
            if (input[5] < -0.21765058) {
                if (input[4] < -0.16056372) {
                    if (input[6] < -0.3711222) {
                        var45 = 0.052669838;
                    } else {
                        var45 = 0.07282362;
                    }
                } else {
                    if (input[3] < -0.2018223) {
                        var45 = 0.06942851;
                    } else {
                        var45 = -0.03381009;
                    }
                }
            } else {
                if (input[3] < 0.42321396) {
                    if (input[3] < -0.3114714) {
                        var45 = 0.030849729;
                    } else {
                        var45 = -0.03750441;
                    }
                } else {
                    if (input[4] < 0.7987067) {
                        var45 = 0.08151633;
                    } else {
                        var45 = -0.005198373;
                    }
                }
            }
        } else {
            if (input[7] < 1.1014061) {
                if (input[0] < -0.9114438) {
                    if (input[6] < 0.6169543) {
                        var45 = 0.045350228;
                    } else {
                        var45 = -0.015680082;
                    }
                } else {
                    if (input[1] < 1.7998767) {
                        var45 = 0.051328868;
                    } else {
                        var45 = -0.03175819;
                    }
                }
            } else {
                if (input[6] < 0.5855442) {
                    if (input[0] < 0.6494735) {
                        var45 = 0.04192901;
                    } else {
                        var45 = -0.0049220608;
                    }
                } else {
                    if (input[0] < 1.3790857) {
                        var45 = -0.0270304;
                    } else {
                        var45 = 0.1072655;
                    }
                }
            }
        }
    } else {
        if (input[4] < 2.0124002) {
            if (input[0] < -0.67573476) {
                if (input[0] < -1.2185669) {
                    if (input[4] < 0.49741524) {
                        var45 = -0.016460044;
                    } else {
                        var45 = -0.0430913;
                    }
                } else {
                    if (input[6] < -0.076917596) {
                        var45 = 0.05539499;
                    } else {
                        var45 = -0.03568551;
                    }
                }
            } else {
                if (input[1] < 0.90770644) {
                    if (input[7] < 1.8364128) {
                        var45 = 0.04092905;
                    } else {
                        var45 = -0.004974891;
                    }
                } else {
                    if (input[1] < 2.2881737) {
                        var45 = -0.006050739;
                    } else {
                        var45 = -0.032672044;
                    }
                }
            }
        } else {
            if (input[4] < 2.6867108) {
                if (input[0] < 1.0150946) {
                    if (input[3] < -0.3419961) {
                        var45 = 0.06859917;
                    } else {
                        var45 = -0.040105946;
                    }
                } else {
                    if (input[1] < 2.4071393) {
                        var45 = 0.014289584;
                    } else {
                        var45 = -0.029995725;
                    }
                }
            } else {
                if (input[7] < -0.010516959) {
                    if (input[6] < 1.3962882) {
                        var45 = 0.096942045;
                    } else {
                        var45 = -0.044852924;
                    }
                } else {
                    if (input[6] < 0.045781214) {
                        var45 = -0.044521015;
                    } else {
                        var45 = -0.03663722;
                    }
                }
            }
        }
    }
    double var46;
    if (input[0] < -0.67573476) {
        if (input[4] < -0.059971534) {
            if (input[2] < -0.40193808) {
                if (input[1] < -0.39088076) {
                    if (input[6] < -0.10942445) {
                        var46 = -0.038240656;
                    } else {
                        var46 = 0.05283467;
                    }
                } else {
                    if (input[7] < 1.9332619) {
                        var46 = -0.051763896;
                    } else {
                        var46 = 0.04897387;
                    }
                }
            } else {
                if (input[6] < 0.9768751) {
                    if (input[2] < -0.20537838) {
                        var46 = -0.039658647;
                    } else {
                        var46 = -0.045507226;
                    }
                } else {
                    if (input[4] < -0.16056372) {
                        var46 = -0.049629934;
                    } else {
                        var46 = 0.04977259;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[4] < 0.49741524) {
                    if (input[6] < 0.7522885) {
                        var46 = 0.0055416357;
                    } else {
                        var46 = 0.047884338;
                    }
                } else {
                    if (input[2] < -0.24199861) {
                        var46 = 0.050764784;
                    } else {
                        var46 = 0.016651314;
                    }
                }
            } else {
                var46 = -0.047669433;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[4] < 0.6836169) {
                if (input[2] < -2.0222292) {
                    if (input[8] < -1.0085884) {
                        var46 = 0.055829134;
                    } else {
                        var46 = -0.0011346019;
                    }
                } else {
                    if (input[1] < 0.676181) {
                        var46 = -0.044051223;
                    } else {
                        var46 = -0.010479148;
                    }
                }
            } else {
                if (input[4] < 1.8737624) {
                    if (input[6] < -0.013923333) {
                        var46 = -0.0382815;
                    } else {
                        var46 = 0.020656092;
                    }
                } else {
                    if (input[6] < -0.5164247) {
                        var46 = -0.07980148;
                    } else {
                        var46 = 0.046969384;
                    }
                }
            }
        } else {
            if (input[1] < 2.2494037) {
                if (input[6] < -0.27517426) {
                    var46 = -0.04551712;
                } else {
                    if (input[0] < 1.5049042) {
                        var46 = -0.04727401;
                    } else {
                        var46 = -0.046302255;
                    }
                }
            } else {
                var46 = -0.045456532;
            }
        }
    }
    double var47;
    if (input[1] < 1.3463372) {
        if (input[1] < 0.7440003) {
            if (input[1] < 0.21375905) {
                var47 = -0.04543491;
            } else {
                var47 = -0.046011604;
            }
        } else {
            if (input[0] < 0.31391355) {
                if (input[1] < 1.2797261) {
                    var47 = -0.04641578;
                } else {
                    if (input[6] < 0.5536235) {
                        var47 = -0.04517589;
                    } else {
                        var47 = -0.028883578;
                    }
                }
            } else {
                var47 = -0.047653787;
            }
        }
    } else {
        if (input[4] < 2.9273717) {
            if (input[2] < -1.5667169) {
                if (input[6] < -0.5164247) {
                    if (input[6] < -0.66334754) {
                        var47 = 0.05466729;
                    } else {
                        var47 = 0.046700515;
                    }
                } else {
                    if (input[8] < -1.0101902) {
                        var47 = 0.036738656;
                    } else {
                        var47 = 0.021871546;
                    }
                }
            } else {
                if (input[6] < 0.87866986) {
                    if (input[6] < -0.10942445) {
                        var47 = 0.05365592;
                    } else {
                        var47 = 0.0392285;
                    }
                } else {
                    if (input[0] < 1.4222157) {
                        var47 = 0.0575541;
                    } else {
                        var47 = 0.054104727;
                    }
                }
            }
        } else {
            if (input[6] < 0.17229258) {
                if (input[6] < 0.036046036) {
                    if (input[1] < 2.1048353) {
                        var47 = 0.053667206;
                    } else {
                        var47 = 0.052525043;
                    }
                } else {
                    if (input[4] < 3.1224794) {
                        var47 = 0.03584006;
                    } else {
                        var47 = 0.05102577;
                    }
                }
            } else {
                if (input[2] < -2.365189) {
                    if (input[7] < 2.4593847) {
                        var47 = 0.0067841327;
                    } else {
                        var47 = 0.042976078;
                    }
                } else {
                    if (input[2] < -1.6885362) {
                        var47 = 0.044721324;
                    } else {
                        var47 = 0.050799746;
                    }
                }
            }
        }
    }
    double var48;
    if (input[5] < 0.3717797) {
        if (input[0] < -1.4369595) {
            if (input[2] < -0.50739306) {
                if (input[3] < 0.4664295) {
                    if (input[5] < -0.25483233) {
                        var48 = 0.07012733;
                    } else {
                        var48 = -0.035844795;
                    }
                } else {
                    if (input[2] < -1.6401584) {
                        var48 = 0.08352995;
                    } else {
                        var48 = -0.04588455;
                    }
                }
            } else {
                if (input[0] < -1.8519993) {
                    var48 = -0.044981807;
                } else {
                    if (input[5] < -0.14566766) {
                        var48 = 0.052081525;
                    } else {
                        var48 = 0.08367785;
                    }
                }
            }
        } else {
            if (input[7] < 1.1014061) {
                if (input[0] < -0.8588556) {
                    if (input[5] < 0.052108772) {
                        var48 = 0.040243115;
                    } else {
                        var48 = -0.00048891996;
                    }
                } else {
                    if (input[1] < 1.7998767) {
                        var48 = 0.050257925;
                    } else {
                        var48 = -0.032796588;
                    }
                }
            } else {
                if (input[7] < 2.2024431) {
                    if (input[1] < 0.676181) {
                        var48 = 0.016191484;
                    } else {
                        var48 = -0.022770533;
                    }
                } else {
                    if (input[2] < -1.3311784) {
                        var48 = 0.07009293;
                    } else {
                        var48 = -0.017248403;
                    }
                }
            }
        }
    } else {
        if (input[0] < -0.67573476) {
            if (input[2] < -0.40193808) {
                if (input[5] < 0.778336) {
                    if (input[0] < -1.2185669) {
                        var48 = -0.039992593;
                    } else {
                        var48 = -0.0068208054;
                    }
                } else {
                    if (input[5] < 4.5011315) {
                        var48 = -0.043127555;
                    } else {
                        var48 = 0.17781197;
                    }
                }
            } else {
                if (input[5] < 0.7004639) {
                    if (input[2] < -0.17182903) {
                        var48 = -0.014354723;
                    } else {
                        var48 = 0.07042319;
                    }
                } else {
                    if (input[5] < 2.8604891) {
                        var48 = -0.031600285;
                    } else {
                        var48 = 0.15154797;
                    }
                }
            }
        } else {
            if (input[1] < 2.2129488) {
                if (input[5] < 1.5041413) {
                    if (input[1] < 0.87503827) {
                        var48 = 0.026063167;
                    } else {
                        var48 = -0.008159831;
                    }
                } else {
                    if (input[3] < 1.7059771) {
                        var48 = -0.031935375;
                    } else {
                        var48 = -0.0010285195;
                    }
                }
            } else {
                if (input[1] < 4.8541236) {
                    if (input[2] < -1.7761412) {
                        var48 = -0.018921025;
                    } else {
                        var48 = -0.03921772;
                    }
                } else {
                    if (input[1] < 6.2633357) {
                        var48 = -0.04025438;
                    } else {
                        var48 = -0.045130115;
                    }
                }
            }
        }
    }
    double var49;
    if (input[0] < -0.67573476) {
        if (input[4] < -0.059971534) {
            if (input[2] < -0.40193808) {
                if (input[1] < -0.39088076) {
                    if (input[6] < -0.10942445) {
                        var49 = -0.036572132;
                    } else {
                        var49 = 0.05178251;
                    }
                } else {
                    if (input[7] < 2.0830097) {
                        var49 = -0.050931644;
                    } else {
                        var49 = 0.04493785;
                    }
                }
            } else {
                if (input[6] < 0.96521854) {
                    if (input[2] < -0.27426052) {
                        var49 = -0.03642178;
                    } else {
                        var49 = -0.045046944;
                    }
                } else {
                    if (input[4] < -0.16056372) {
                        var49 = -0.049726862;
                    } else {
                        var49 = 0.046576638;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[4] < 0.49741524) {
                    if (input[6] < 0.7522885) {
                        var49 = 0.005088452;
                    } else {
                        var49 = 0.04597121;
                    }
                } else {
                    if (input[2] < -0.24199861) {
                        var49 = 0.04952775;
                    } else {
                        var49 = 0.015485947;
                    }
                }
            } else {
                var49 = -0.047153413;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[4] < 0.6836169) {
                if (input[2] < -2.0222292) {
                    if (input[3] < 1.791475) {
                        var49 = -0.0033063828;
                    } else {
                        var49 = 0.05156112;
                    }
                } else {
                    if (input[3] < 1.146763) {
                        var49 = -0.04341014;
                    } else {
                        var49 = -0.0021963948;
                    }
                }
            } else {
                if (input[4] < 1.8737624) {
                    if (input[6] < 0.045781214) {
                        var49 = -0.031547092;
                    } else {
                        var49 = 0.02122486;
                    }
                } else {
                    if (input[6] < -0.5164247) {
                        var49 = -0.077958606;
                    } else {
                        var49 = 0.04515665;
                    }
                }
            }
        } else {
            if (input[1] < 2.2494037) {
                if (input[6] < -0.27517426) {
                    var49 = -0.045080323;
                } else {
                    if (input[0] < 1.5049042) {
                        var49 = -0.046788946;
                    } else {
                        var49 = -0.045870617;
                    }
                }
            } else {
                var49 = -0.045042705;
            }
        }
    }
    double var50;
    if (input[1] < 1.3463372) {
        if (input[3] < 1.146763) {
            if (input[1] < 0.21375905) {
                var50 = -0.04501019;
            } else {
                var50 = -0.045579188;
            }
        } else {
            if (input[1] < 1.2797261) {
                if (input[3] < 1.4120835) {
                    var50 = -0.04631639;
                } else {
                    var50 = -0.047429178;
                }
            } else {
                if (input[3] < 1.7358835) {
                    if (input[5] < 0.7004639) {
                        var50 = 0.008998611;
                    } else {
                        var50 = -0.04409192;
                    }
                } else {
                    var50 = -0.047878217;
                }
            }
        }
    } else {
        if (input[4] < 2.9273717) {
            if (input[6] < -0.5164247) {
                if (input[5] < -0.03392489) {
                    var50 = -0.044174675;
                } else {
                    if (input[6] < -0.66334754) {
                        var50 = 0.053348515;
                    } else {
                        var50 = 0.0469796;
                    }
                }
            } else {
                if (input[6] < 1.0421718) {
                    if (input[7] < 2.006107) {
                        var50 = 0.035739906;
                    } else {
                        var50 = 0.021699402;
                    }
                } else {
                    if (input[6] < 1.1156986) {
                        var50 = 0.045898486;
                    } else {
                        var50 = 0.05402121;
                    }
                }
            }
        } else {
            if (input[6] < 0.17229258) {
                if (input[6] < 0.045781214) {
                    if (input[1] < 2.1048353) {
                        var50 = 0.052462123;
                    } else {
                        var50 = 0.051326673;
                    }
                } else {
                    if (input[5] < 1.9629639) {
                        var50 = 0.00014854252;
                    } else {
                        var50 = 0.049354535;
                    }
                }
            } else {
                if (input[1] < 6.2633357) {
                    if (input[3] < 2.4207425) {
                        var50 = 0.05066038;
                    } else {
                        var50 = 0.038224082;
                    }
                } else {
                    if (input[1] < 7.012119) {
                        var50 = 0.048793018;
                    } else {
                        var50 = 0.051646512;
                    }
                }
            }
        }
    }
    double var51;
    if (input[4] < 0.5475403) {
        if (input[0] < -1.5857102) {
            if (input[8] < -0.99807274) {
                if (input[8] < -0.99920183) {
                    if (input[4] < 0.08949875) {
                        var51 = 0.06979496;
                    } else {
                        var51 = 0.107189976;
                    }
                } else {
                    if (input[0] < -2.5857399) {
                        var51 = -0.028406216;
                    } else {
                        var51 = 0.06677941;
                    }
                }
            } else {
                if (input[2] < -0.5850242) {
                    if (input[4] < -0.10842057) {
                        var51 = 0.009631182;
                    } else {
                        var51 = -0.03596574;
                    }
                } else {
                    if (input[4] < -0.24262848) {
                        var51 = 0.048881534;
                    } else {
                        var51 = 0.07914617;
                    }
                }
            }
        } else {
            if (input[1] < 0.676181) {
                if (input[0] < -0.8048311) {
                    if (input[6] < 0.76057523) {
                        var51 = 0.045197666;
                    } else {
                        var51 = -0.02030991;
                    }
                } else {
                    if (input[2] < -2.0869267) {
                        var51 = 0.031134728;
                    } else {
                        var51 = 0.049577393;
                    }
                }
            } else {
                if (input[6] < 0.59192634) {
                    if (input[7] < 1.8364128) {
                        var51 = 0.0050060283;
                    } else {
                        var51 = 0.06189876;
                    }
                } else {
                    if (input[8] < -1.0148631) {
                        var51 = 0.09330247;
                    } else {
                        var51 = -0.030777162;
                    }
                }
            }
        }
    } else {
        if (input[4] < 2.0740442) {
            if (input[0] < -0.9890895) {
                if (input[2] < -0.40193808) {
                    if (input[6] < -2.5654123) {
                        var51 = 0.15455921;
                    } else {
                        var51 = -0.041113947;
                    }
                } else {
                    if (input[6] < -0.66334754) {
                        var51 = 0.1133113;
                    } else {
                        var51 = -0.023275852;
                    }
                }
            } else {
                if (input[1] < 1.7998767) {
                    if (input[6] < 0.10903511) {
                        var51 = 0.041833602;
                    } else {
                        var51 = -0.0017139328;
                    }
                } else {
                    if (input[1] < 3.2012215) {
                        var51 = -0.01585826;
                    } else {
                        var51 = -0.040453453;
                    }
                }
            }
        } else {
            if (input[6] < 0.045781214) {
                if (input[2] < -0.10417372) {
                    if (input[1] < 1.3463372) {
                        var51 = -0.03127106;
                    } else {
                        var51 = -0.044120163;
                    }
                } else {
                    if (input[1] < 1.1479133) {
                        var51 = 0.079821326;
                    } else {
                        var51 = -0.043718245;
                    }
                }
            } else {
                if (input[0] < 1.0150946) {
                    if (input[2] < -0.040484577) {
                        var51 = -0.04176834;
                    } else {
                        var51 = 0.035321783;
                    }
                } else {
                    if (input[4] < 3.0935438) {
                        var51 = -0.001778601;
                    } else {
                        var51 = -0.033344347;
                    }
                }
            }
        }
    }
    double var52;
    if (input[1] < 1.3463372) {
        if (input[2] < -0.24199861) {
            if (input[5] < 0.3717797) {
                if (input[1] < -0.33664477) {
                    if (input[5] < 0.007825906) {
                        var52 = 0.023643268;
                    } else {
                        var52 = 0.043771487;
                    }
                } else {
                    if (input[2] < -0.90841156) {
                        var52 = 0.009721906;
                    } else {
                        var52 = -0.03598776;
                    }
                }
            } else {
                if (input[3] < 0.98658097) {
                    if (input[5] < 0.79324865) {
                        var52 = 0.03299408;
                    } else {
                        var52 = 0.04745984;
                    }
                } else {
                    if (input[6] < 0.27949953) {
                        var52 = 0.010352468;
                    } else {
                        var52 = 0.032806586;
                    }
                }
            }
        } else {
            if (input[5] < 0.6269806) {
                if (input[2] < 0.084040545) {
                    if (input[6] < 0.6229602) {
                        var52 = -0.045003906;
                    } else {
                        var52 = 0.027833957;
                    }
                } else {
                    if (input[5] < 0.43677843) {
                        var52 = -0.044256076;
                    } else {
                        var52 = -0.032015014;
                    }
                }
            } else {
                if (input[6] < 1.1475737) {
                    if (input[6] < 0.016482182) {
                        var52 = -0.05593156;
                    } else {
                        var52 = 0.003765176;
                    }
                } else {
                    if (input[2] < 0.39350474) {
                        var52 = 0.05233027;
                    } else {
                        var52 = -0.04728939;
                    }
                }
            }
        }
    } else {
        if (input[1] < 2.2881737) {
            if (input[6] < -0.27517426) {
                var52 = -0.044696677;
            } else {
                if (input[2] < -1.3943495) {
                    if (input[3] < 2.1428928) {
                        var52 = -0.04654606;
                    } else {
                        var52 = -0.04557824;
                    }
                } else {
                    var52 = -0.045142688;
                }
            }
        } else {
            var52 = -0.044666294;
        }
    }
    double var53;
    if (input[1] < 1.3463372) {
        if (input[3] < 1.146763) {
            if (input[1] < 0.1938129) {
                var53 = -0.044620387;
            } else {
                if (input[1] < 1.2797261) {
                    var53 = -0.045194563;
                } else {
                    if (input[2] < -2.5739663) {
                        var53 = 0.122081764;
                    } else {
                        var53 = -0.04298387;
                    }
                }
            }
        } else {
            if (input[6] < -2.2130756) {
                var53 = 0.00020407248;
            } else {
                if (input[1] < 1.2797261) {
                    if (input[4] < 1.8737624) {
                        var53 = -0.04700951;
                    } else {
                        var53 = -0.045856502;
                    }
                } else {
                    if (input[3] < 1.7358835) {
                        var53 = -0.038418517;
                    } else {
                        var53 = -0.047367852;
                    }
                }
            }
        }
    } else {
        if (input[4] < 3.0045075) {
            if (input[2] < -1.5667169) {
                if (input[6] < -0.5164247) {
                    if (input[6] < -0.6367732) {
                        var53 = 0.052018583;
                    } else {
                        var53 = 0.043745108;
                    }
                } else {
                    if (input[6] < 0.44596845) {
                        var53 = 0.016404385;
                    } else {
                        var53 = 0.03197626;
                    }
                }
            } else {
                if (input[6] < 0.87866986) {
                    if (input[6] < -0.076917596) {
                        var53 = 0.050934546;
                    } else {
                        var53 = 0.03605549;
                    }
                } else {
                    if (input[3] < 1.378464) {
                        var53 = 0.05564322;
                    } else {
                        var53 = 0.051481962;
                    }
                }
            }
        } else {
            if (input[6] < 0.17229258) {
                if (input[6] < 0.036046036) {
                    var53 = 0.050467268;
                } else {
                    if (input[4] < 3.1224794) {
                        var53 = 0.02800471;
                    } else {
                        var53 = 0.048765857;
                    }
                }
            } else {
                if (input[2] < -1.898552) {
                    if (input[1] < 4.6108503) {
                        var53 = 0.030681528;
                    } else {
                        var53 = 0.04722344;
                    }
                } else {
                    if (input[3] < 2.3930185) {
                        var53 = 0.05096594;
                    } else {
                        var53 = 0.046156686;
                    }
                }
            }
        }
    }
    double var54;
    if (input[5] < 0.3717797) {
        if (input[5] < 0.052108772) {
            if (input[8] < -0.71863294) {
                if (input[1] < -0.40374717) {
                    if (input[6] < 0.30617934) {
                        var54 = 0.030341897;
                    } else {
                        var54 = -0.017005622;
                    }
                } else {
                    if (input[7] < 0.9519198) {
                        var54 = 0.0473232;
                    } else {
                        var54 = 0.0040362645;
                    }
                }
            } else {
                var54 = 0.049227074;
            }
        } else {
            if (input[6] < 0.6169543) {
                if (input[7] < 1.1014061) {
                    if (input[1] < -0.43066883) {
                        var54 = -0.0031669554;
                    } else {
                        var54 = 0.041796025;
                    }
                } else {
                    if (input[1] < -0.07761374) {
                        var54 = -0.035548393;
                    } else {
                        var54 = 0.010530727;
                    }
                }
            } else {
                if (input[1] < -0.3416446) {
                    if (input[8] < -0.6008304) {
                        var54 = -0.031662136;
                    } else {
                        var54 = 0.05150257;
                    }
                } else {
                    if (input[7] < 0.3859621) {
                        var54 = 0.03773549;
                    } else {
                        var54 = -0.007960334;
                    }
                }
            }
        }
    } else {
        if (input[4] < 2.3262393) {
            if (input[6] < 1.0560412) {
                if (input[1] < -0.37364784) {
                    if (input[3] < -0.38977444) {
                        var54 = 0.028645864;
                    } else {
                        var54 = -0.039600268;
                    }
                } else {
                    if (input[4] < 0.6836169) {
                        var54 = 0.023177814;
                    } else {
                        var54 = -0.007002939;
                    }
                }
            } else {
                if (input[3] < -0.44966707) {
                    if (input[1] < -0.4910765) {
                        var54 = 0.11791836;
                    } else {
                        var54 = 0.06450276;
                    }
                } else {
                    if (input[5] < 0.8090552) {
                        var54 = -0.026006937;
                    } else {
                        var54 = -0.041193575;
                    }
                }
            }
        } else {
            if (input[6] < 0.045781214) {
                if (input[8] < -0.9902522) {
                    if (input[1] < 1.3463372) {
                        var54 = -0.035682246;
                    } else {
                        var54 = -0.043994952;
                    }
                } else {
                    if (input[1] < -0.1967028) {
                        var54 = -0.034600154;
                    } else {
                        var54 = 0.0063403705;
                    }
                }
            } else {
                if (input[3] < 1.791475) {
                    if (input[7] < -0.19052146) {
                        var54 = 0.06141232;
                    } else {
                        var54 = -0.04136484;
                    }
                } else {
                    if (input[4] < 3.1504886) {
                        var54 = -0.0030787657;
                    } else {
                        var54 = -0.032626092;
                    }
                }
            }
        }
    }
    double var55;
    if (input[0] < -0.67573476) {
        if (input[5] < 0.007825906) {
            if (input[2] < -0.6580676) {
                if (input[6] < -0.22590312) {
                    if (input[0] < -2.1572433) {
                        var55 = 0.03235569;
                    } else {
                        var55 = -0.053567316;
                    }
                } else {
                    if (input[3] < -0.11250562) {
                        var55 = 0.051130712;
                    } else {
                        var55 = 0.01268473;
                    }
                }
            } else {
                if (input[6] < 1.131379) {
                    if (input[2] < -0.40193808) {
                        var55 = -0.013184988;
                    } else {
                        var55 = -0.043751437;
                    }
                } else {
                    if (input[5] < -0.19945322) {
                        var55 = -0.050716817;
                    } else {
                        var55 = 0.05254495;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[5] < 0.45689812) {
                    if (input[0] < -1.4369595) {
                        var55 = 0.04527149;
                    } else {
                        var55 = 0.010601903;
                    }
                } else {
                    if (input[4] < 0.38151222) {
                        var55 = 0.013213244;
                    } else {
                        var55 = 0.04753956;
                    }
                }
            } else {
                var55 = -0.04622191;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[4] < 0.6836169) {
                if (input[2] < -2.0222292) {
                    if (input[3] < 1.791475) {
                        var55 = -0.0034095806;
                    } else {
                        var55 = 0.047548313;
                    }
                } else {
                    if (input[1] < 0.676181) {
                        var55 = -0.04255802;
                    } else {
                        var55 = -0.011411834;
                    }
                }
            } else {
                if (input[4] < 1.8737624) {
                    if (input[6] < -0.013923333) {
                        var55 = -0.035961807;
                    } else {
                        var55 = 0.01728133;
                    }
                } else {
                    if (input[6] < -0.42002866) {
                        var55 = -0.07169938;
                    } else {
                        var55 = 0.042555798;
                    }
                }
            }
        } else {
            if (input[1] < 2.2881737) {
                if (input[4] < 2.9273717) {
                    var55 = -0.04554941;
                } else {
                    var55 = -0.0445511;
                }
            } else {
                var55 = -0.04431262;
            }
        }
    }
    double var56;
    if (input[3] < 1.3087254) {
        if (input[3] < 0.8649154) {
            if (input[3] < 0.58490884) {
                if (input[0] < 0.68187267) {
                    var56 = -0.044257782;
                } else {
                    if (input[6] < 1.802359) {
                        var56 = -0.04461534;
                    } else {
                        var56 = -0.01653227;
                    }
                }
            } else {
                if (input[2] < -0.8246115) {
                    if (input[6] < -0.5624454) {
                        var56 = -0.008654277;
                    } else {
                        var56 = -0.040873617;
                    }
                } else {
                    if (input[6] < 0.812421) {
                        var56 = -0.030145826;
                    } else {
                        var56 = 0.010670062;
                    }
                }
            }
        } else {
            if (input[6] < -0.61161494) {
                if (input[7] < 0.47780812) {
                    var56 = -0.042356115;
                } else {
                    if (input[4] < 4.111743) {
                        var56 = 0.047125973;
                    } else {
                        var56 = -0.037734818;
                    }
                }
            } else {
                if (input[2] < -0.74347) {
                    if (input[2] < -1.5767516) {
                        var56 = -0.035948325;
                    } else {
                        var56 = -0.014202588;
                    }
                } else {
                    if (input[6] < 1.2545375) {
                        var56 = 0.010655289;
                    } else {
                        var56 = 0.041779336;
                    }
                }
            }
        }
    } else {
        if (input[5] < 2.0968094) {
            if (input[3] < 2.0332208) {
                if (input[2] < -1.7761412) {
                    if (input[2] < -2.2191432) {
                        var56 = -0.028333982;
                    } else {
                        var56 = -0.008786574;
                    }
                } else {
                    if (input[2] < -1.0255873) {
                        var56 = 0.016781716;
                    } else {
                        var56 = 0.047048967;
                    }
                }
            } else {
                if (input[6] < -0.49629098) {
                    if (input[4] < 0.32170585) {
                        var56 = 0.015134915;
                    } else {
                        var56 = 0.050847467;
                    }
                } else {
                    if (input[6] < 0.43373632) {
                        var56 = 0.0086512845;
                    } else {
                        var56 = 0.03344414;
                    }
                }
            }
        } else {
            if (input[6] < 0.14144441) {
                if (input[6] < -0.06638456) {
                    if (input[4] < 0.7743656) {
                        var56 = -0.030343955;
                    } else {
                        var56 = 0.049352717;
                    }
                } else {
                    if (input[4] < 1.7649002) {
                        var56 = -0.013418455;
                    } else {
                        var56 = 0.045509133;
                    }
                }
            } else {
                if (input[2] < -1.7169069) {
                    if (input[3] < 4.3857894) {
                        var56 = 0.017034661;
                    } else {
                        var56 = 0.045425657;
                    }
                } else {
                    if (input[3] < 1.4811105) {
                        var56 = 0.019694125;
                    } else {
                        var56 = 0.045441024;
                    }
                }
            }
        }
    }
    double var57;
    if (input[5] < 0.3717797) {
        if (input[0] < -1.4369595) {
            if (input[3] < -0.3114714) {
                if (input[5] < 0.2963442) {
                    if (input[5] < -0.10965646) {
                        var57 = 0.04940091;
                    } else {
                        var57 = 0.09592231;
                    }
                } else {
                    if (input[6] < 0.10035754) {
                        var57 = 0.1186561;
                    } else {
                        var57 = -0.027404798;
                    }
                }
            } else {
                if (input[3] < 0.53314555) {
                    if (input[5] < -0.23624666) {
                        var57 = 0.06300977;
                    } else {
                        var57 = -0.033648796;
                    }
                } else {
                    if (input[8] < -1.0044886) {
                        var57 = 0.062279895;
                    } else {
                        var57 = 0.09063036;
                    }
                }
            }
        } else {
            if (input[5] < 0.07409769) {
                if (input[0] < -0.96548903) {
                    if (input[6] < 0.812421) {
                        var57 = 0.04042473;
                    } else {
                        var57 = -0.01608134;
                    }
                } else {
                    if (input[1] < 1.7998767) {
                        var57 = 0.04789198;
                    } else {
                        var57 = -0.027629312;
                    }
                }
            } else {
                if (input[6] < 0.5980011) {
                    if (input[3] < 0.77944803) {
                        var57 = 0.04473668;
                    } else {
                        var57 = 0.01301705;
                    }
                } else {
                    if (input[0] < -0.6165523) {
                        var57 = -0.025413595;
                    } else {
                        var57 = 0.026311366;
                    }
                }
            }
        }
    } else {
        if (input[4] < 2.3509135) {
            if (input[0] < -0.6165523) {
                if (input[0] < -1.2185669) {
                    if (input[4] < 0.49741524) {
                        var57 = -0.013307164;
                    } else {
                        var57 = -0.041160718;
                    }
                } else {
                    if (input[6] < -0.03500452) {
                        var57 = 0.049862344;
                    } else {
                        var57 = -0.03393019;
                    }
                }
            } else {
                if (input[1] < 0.90770644) {
                    if (input[6] < 1.2179093) {
                        var57 = 0.031800855;
                    } else {
                        var57 = -0.02323703;
                    }
                } else {
                    if (input[1] < 2.4989395) {
                        var57 = -0.0026579115;
                    } else {
                        var57 = -0.030971956;
                    }
                }
            }
        } else {
            if (input[6] < 0.045781214) {
                if (input[8] < -0.9902522) {
                    if (input[1] < 1.3463372) {
                        var57 = -0.034558676;
                    } else {
                        var57 = -0.043554712;
                    }
                } else {
                    if (input[0] < -0.83187574) {
                        var57 = -0.03810003;
                    } else {
                        var57 = 0.031135578;
                    }
                }
            } else {
                if (input[3] < 1.791475) {
                    if (input[5] < 5.0620394) {
                        var57 = -0.040494274;
                    } else {
                        var57 = 0.1253634;
                    }
                } else {
                    if (input[4] < 3.1504886) {
                        var57 = -0.0018731536;
                    } else {
                        var57 = -0.03182706;
                    }
                }
            }
        }
    }
    double var58;
    if (input[1] < 1.3463372) {
        if (input[2] < -0.24199861) {
            if (input[4] < 0.9792598) {
                if (input[1] < -0.30539098) {
                    if (input[4] < 0.117171735) {
                        var58 = 0.02117263;
                    } else {
                        var58 = 0.04241765;
                    }
                } else {
                    if (input[7] < 1.3538029) {
                        var58 = -0.01761388;
                    } else {
                        var58 = 0.020116678;
                    }
                }
            } else {
                if (input[3] < 1.2304595) {
                    if (input[6] < -0.013923333) {
                        var58 = 0.03584644;
                    } else {
                        var58 = 0.046595056;
                    }
                } else {
                    if (input[4] < 2.3749502) {
                        var58 = 0.017442655;
                    } else {
                        var58 = 0.045226615;
                    }
                }
            }
        } else {
            if (input[5] < 0.59864205) {
                if (input[2] < 0.084040545) {
                    if (input[6] < 0.6169543) {
                        var58 = -0.04426303;
                    } else {
                        var58 = 0.025326334;
                    }
                } else {
                    if (input[3] < -0.3735895) {
                        var58 = -0.043972798;
                    } else {
                        var58 = -0.03918926;
                    }
                }
            } else {
                if (input[6] < 1.1647528) {
                    if (input[6] < 0.016482182) {
                        var58 = -0.054897297;
                    } else {
                        var58 = -0.00030063113;
                    }
                } else {
                    if (input[2] < 0.41529825) {
                        var58 = 0.048781335;
                    } else {
                        var58 = -0.04673393;
                    }
                }
            }
        }
    } else {
        if (input[1] < 2.2494037) {
            if (input[4] < 2.9273717) {
                var58 = -0.04531961;
            } else {
                var58 = -0.04428223;
            }
        } else {
            var58 = -0.044018175;
        }
    }
    double var59;
    if (input[1] < 1.3463372) {
        if (input[3] < 1.146763) {
            if (input[1] < 0.23779523) {
                var59 = -0.043955002;
            } else {
                if (input[1] < 1.2797261) {
                    if (input[0] < -0.7813698) {
                        var59 = -0.04398988;
                    } else {
                        var59 = -0.044886712;
                    }
                } else {
                    if (input[2] < -2.5739663) {
                        var59 = 0.11837038;
                    } else {
                        var59 = -0.0444097;
                    }
                }
            }
        } else {
            if (input[1] < 1.2797261) {
                if (input[3] < 1.4120835) {
                    var59 = -0.045358267;
                } else {
                    var59 = -0.046406347;
                }
            } else {
                if (input[0] < -0.59951556) {
                    if (input[2] < -2.422099) {
                        var59 = -0.023790218;
                    } else {
                        var59 = 0.07649511;
                    }
                } else {
                    if (input[3] < 1.7358835) {
                        var59 = -0.039263017;
                    } else {
                        var59 = -0.04681117;
                    }
                }
            }
        }
    } else {
        if (input[1] < 3.0608592) {
            if (input[2] < -1.5667169) {
                if (input[7] < 2.0830097) {
                    if (input[5] < 1.3400273) {
                        var59 = 0.038967423;
                    } else {
                        var59 = 0.025478704;
                    }
                } else {
                    if (input[5] < 2.573861) {
                        var59 = 0.015257476;
                    } else {
                        var59 = 0.029741244;
                    }
                }
            } else {
                if (input[2] < -1.167169) {
                    if (input[0] < 2.922025) {
                        var59 = 0.043558758;
                    } else {
                        var59 = 0.031310905;
                    }
                } else {
                    if (input[5] < 0.2963442) {
                        var59 = 0.022303583;
                    } else {
                        var59 = 0.048728127;
                    }
                }
            }
        } else {
            if (input[1] < 4.8541236) {
                if (input[2] < -1.9074583) {
                    if (input[5] < 4.646677) {
                        var59 = 0.03764614;
                    } else {
                        var59 = 0.018634455;
                    }
                } else {
                    if (input[5] < 5.0620394) {
                        var59 = 0.04655287;
                    } else {
                        var59 = 0.03350101;
                    }
                }
            } else {
                if (input[5] < 5.630825) {
                    if (input[1] < 5.465226) {
                        var59 = 0.047627456;
                    } else {
                        var59 = 0.048968844;
                    }
                } else {
                    if (input[0] < 3.0979455) {
                        var59 = -0.0065448205;
                    } else {
                        var59 = 0.04719981;
                    }
                }
            }
        }
    }
    double var60;
    if (input[4] < 0.5475403) {
        if (input[2] < -0.40193808) {
            if (input[1] < -0.38781208) {
                if (input[6] < -0.43760318) {
                    if (input[4] < 0.32170585) {
                        var60 = 0.074116215;
                    } else {
                        var60 = -0.014987624;
                    }
                } else {
                    if (input[3] < -0.3419961) {
                        var60 = 0.049759205;
                    } else {
                        var60 = -0.030844757;
                    }
                }
            } else {
                if (input[6] < 0.6105327) {
                    if (input[2] < -0.90841156) {
                        var60 = 0.026969766;
                    } else {
                        var60 = 0.050392497;
                    }
                } else {
                    if (input[7] < 0.7355263) {
                        var60 = 0.027010476;
                    } else {
                        var60 = -0.019533671;
                    }
                }
            }
        } else {
            if (input[6] < 0.8209485) {
                if (input[6] < 0.6229602) {
                    if (input[1] < 0.87503827) {
                        var60 = 0.04747296;
                    } else {
                        var60 = 0.07757716;
                    }
                } else {
                    if (input[2] < 0.084040545) {
                        var60 = 0.026142018;
                    } else {
                        var60 = 0.047945436;
                    }
                }
            } else {
                if (input[2] < 0.11512014) {
                    if (input[4] < -0.16056372) {
                        var60 = 0.055978477;
                    } else {
                        var60 = -0.022923192;
                    }
                } else {
                    if (input[4] < 0.46900508) {
                        var60 = 0.047577668;
                    } else {
                        var60 = 0.004730942;
                    }
                }
            }
        }
    } else {
        if (input[4] < 2.3985608) {
            if (input[2] < -0.20537838) {
                if (input[1] < 0.013074827) {
                    if (input[2] < -0.6793288) {
                        var60 = -0.03840175;
                    } else {
                        var60 = -0.014301609;
                    }
                } else {
                    if (input[1] < 2.5473828) {
                        var60 = -0.0016962145;
                    } else {
                        var60 = -0.030457437;
                    }
                }
            } else {
                if (input[6] < 1.1006693) {
                    if (input[1] < 1.4828581) {
                        var60 = 0.043076824;
                    } else {
                        var60 = -0.038124673;
                    }
                } else {
                    if (input[2] < 0.49787998) {
                        var60 = -0.021447655;
                    } else {
                        var60 = 0.053781036;
                    }
                }
            }
        } else {
            if (input[6] < 0.045781214) {
                if (input[8] < -0.9902522) {
                    if (input[1] < 1.3463372) {
                        var60 = -0.03469466;
                    } else {
                        var60 = -0.043232422;
                    }
                } else {
                    if (input[2] < -0.24199861) {
                        var60 = -0.02374926;
                    } else {
                        var60 = 0.056786336;
                    }
                }
            } else {
                if (input[3] < 1.791475) {
                    if (input[7] < -0.19052146) {
                        var60 = 0.057480015;
                    } else {
                        var60 = -0.04044227;
                    }
                } else {
                    if (input[1] < 4.8541236) {
                        var60 = -0.010750521;
                    } else {
                        var60 = -0.039163556;
                    }
                }
            }
        }
    }
    double var61;
    if (input[0] < -0.67573476) {
        if (input[2] < -0.10417372) {
            if (input[1] < 1.3463372) {
                if (input[2] < -0.63441837) {
                    if (input[0] < -1.2494789) {
                        var61 = 0.04612881;
                    } else {
                        var61 = 0.036824886;
                    }
                } else {
                    if (input[6] < 0.76057523) {
                        var61 = 0.002995864;
                    } else {
                        var61 = 0.043412894;
                    }
                }
            } else {
                var61 = -0.04564627;
            }
        } else {
            if (input[6] < 0.13341936) {
                if (input[6] < 0.08216988) {
                    if (input[7] < -0.3026839) {
                        var61 = -0.043852516;
                    } else {
                        var61 = -0.048758164;
                    }
                } else {
                    if (input[7] < 0.048413653) {
                        var61 = -0.04561477;
                    } else {
                        var61 = 0.053007882;
                    }
                }
            } else {
                if (input[2] < 0.084040545) {
                    if (input[6] < 0.6229602) {
                        var61 = -0.00038698982;
                    } else {
                        var61 = 0.035815276;
                    }
                } else {
                    if (input[6] < 0.27949953) {
                        var61 = 0.012865612;
                    } else {
                        var61 = -0.046630945;
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[7] < 0.85655856) {
                if (input[6] < 1.1006693) {
                    if (input[8] < -0.99511594) {
                        var61 = 0.001628283;
                    } else {
                        var61 = -0.04154923;
                    }
                } else {
                    if (input[2] < 0.3694625) {
                        var61 = 0.041212596;
                    } else {
                        var61 = -0.041982997;
                    }
                }
            } else {
                if (input[6] < 0.2102253) {
                    if (input[7] < 2.217319) {
                        var61 = -0.016175086;
                    } else {
                        var61 = 0.022665476;
                    }
                } else {
                    if (input[7] < 1.7396411) {
                        var61 = 0.016177136;
                    } else {
                        var61 = 0.03489278;
                    }
                }
            }
        } else {
            if (input[1] < 2.2881737) {
                if (input[2] < -1.5667169) {
                    var61 = -0.044939864;
                } else {
                    var61 = -0.04399909;
                }
            } else {
                var61 = -0.04370822;
            }
        }
    }
    double var62;
    if (input[1] < 1.3463372) {
        if (input[1] < 0.676181) {
            if (input[5] < -0.14566766) {
                var62 = -0.04348123;
            } else {
                if (input[0] < -0.7813698) {
                    if (input[5] < 0.2963442) {
                        var62 = -0.044518437;
                    } else {
                        var62 = -0.043584898;
                    }
                } else {
                    if (input[5] < 0.2688818) {
                        var62 = -0.043681405;
                    } else {
                        var62 = -0.044548076;
                    }
                }
            }
        } else {
            if (input[0] < 0.31391355) {
                if (input[1] < 1.2797261) {
                    var62 = -0.044541676;
                } else {
                    if (input[8] < -1.0027871) {
                        var62 = -0.039494224;
                    } else {
                        var62 = -0.011552485;
                    }
                }
            } else {
                var62 = -0.04574938;
            }
        }
    } else {
        if (input[1] < 3.2012215) {
            if (input[2] < -1.5871143) {
                if (input[4] < 3.3020856) {
                    if (input[5] < 1.3400273) {
                        var62 = 0.030383706;
                    } else {
                        var62 = 0.012321155;
                    }
                } else {
                    if (input[0] < 2.8639526) {
                        var62 = 0.044636216;
                    } else {
                        var62 = 0.0320734;
                    }
                }
            } else {
                if (input[2] < -1.1946733) {
                    if (input[4] < 2.4887815) {
                        var62 = 0.031656068;
                    } else {
                        var62 = 0.044546135;
                    }
                } else {
                    if (input[0] < 3.776753) {
                        var62 = 0.0480586;
                    } else {
                        var62 = 0.042408586;
                    }
                }
            }
        } else {
            if (input[1] < 5.322413) {
                if (input[5] < 5.1879473) {
                    if (input[2] < -2.030913) {
                        var62 = 0.036402892;
                    } else {
                        var62 = 0.045471463;
                    }
                } else {
                    if (input[8] < -1.0162003) {
                        var62 = -0.015136835;
                    } else {
                        var62 = 0.03570884;
                    }
                }
            } else {
                if (input[5] < 6.07121) {
                    if (input[4] < 2.4215734) {
                        var62 = 0.049196813;
                    } else {
                        var62 = 0.04780829;
                    }
                } else {
                    if (input[0] < 3.0979455) {
                        var62 = -0.014096522;
                    } else {
                        var62 = 0.046771802;
                    }
                }
            }
        }
    }
    double var63;
    if (input[5] < 0.3717797) {
        if (input[2] < -0.7010482) {
            if (input[3] < 0.2394132) {
                if (input[4] < 0.35266468) {
                    if (input[1] < -0.38781208) {
                        var63 = -0.026500067;
                    } else {
                        var63 = 0.021686843;
                    }
                } else {
                    if (input[2] < -0.90841156) {
                        var63 = -0.038183764;
                    } else {
                        var63 = -0.00015888213;
                    }
                }
            } else {
                if (input[2] < -2.0135303) {
                    if (input[2] < -2.2572403) {
                        var63 = 0.024026914;
                    } else {
                        var63 = -0.028631737;
                    }
                } else {
                    if (input[3] < 1.3087254) {
                        var63 = 0.036561523;
                    } else {
                        var63 = -0.0047641345;
                    }
                }
            }
        } else {
            if (input[2] < 0.084040545) {
                if (input[6] < 0.8209485) {
                    if (input[1] < -0.37364784) {
                        var63 = 0.03148354;
                    } else {
                        var63 = 0.04844778;
                    }
                } else {
                    if (input[8] < -0.8997096) {
                        var63 = 0.028621627;
                    } else {
                        var63 = -0.027631823;
                    }
                }
            } else {
                if (input[1] < 1.4189887) {
                    if (input[3] < -0.3735895) {
                        var63 = 0.047061544;
                    } else {
                        var63 = 0.045058597;
                    }
                } else {
                    var63 = -0.037528668;
                }
            }
        }
    } else {
        if (input[4] < 2.3262393) {
            if (input[6] < 1.0560412) {
                if (input[1] < -0.36940223) {
                    if (input[2] < 0.23611674) {
                        var63 = -0.036970116;
                    } else {
                        var63 = 0.051257342;
                    }
                } else {
                    if (input[2] < -0.40193808) {
                        var63 = -0.0043043965;
                    } else {
                        var63 = 0.042173676;
                    }
                }
            } else {
                if (input[2] < 0.49787998) {
                    if (input[5] < 0.8090552) {
                        var63 = -0.024948308;
                    } else {
                        var63 = -0.039964877;
                    }
                } else {
                    if (input[1] < 1.1223204) {
                        var63 = 0.061067123;
                    } else {
                        var63 = -0.03980762;
                    }
                }
            }
        } else {
            if (input[6] < 0.036046036) {
                if (input[8] < -0.9925188) {
                    if (input[1] < 1.3880605) {
                        var63 = -0.03490225;
                    } else {
                        var63 = -0.042890318;
                    }
                } else {
                    if (input[2] < -1.2522597) {
                        var63 = -0.03337264;
                    } else {
                        var63 = 0.013902372;
                    }
                }
            } else {
                if (input[3] < 1.7358835) {
                    if (input[4] < 6.366106) {
                        var63 = -0.039540436;
                    } else {
                        var63 = 0.10623537;
                    }
                } else {
                    if (input[1] < 4.8541236) {
                        var63 = -0.0092365;
                    } else {
                        var63 = -0.03878463;
                    }
                }
            }
        }
    }
    double var64;
    if (input[0] < -0.67573476) {
        if (input[5] < 0.029720757) {
            if (input[2] < -0.6580676) {
                if (input[0] < -1.3282267) {
                    if (input[5] < -0.25483233) {
                        var64 = -0.034350306;
                    } else {
                        var64 = 0.03967496;
                    }
                } else {
                    if (input[3] < -0.11250562) {
                        var64 = 0.046070207;
                    } else {
                        var64 = -0.033604607;
                    }
                }
            } else {
                if (input[6] < 1.131379) {
                    if (input[2] < -0.40193808) {
                        var64 = -0.014145576;
                    } else {
                        var64 = -0.04252054;
                    }
                } else {
                    if (input[5] < -0.19945322) {
                        var64 = -0.050625775;
                    } else {
                        var64 = 0.045435056;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[5] < 0.549512) {
                    if (input[0] < -1.4369595) {
                        var64 = 0.042725958;
                    } else {
                        var64 = 0.009985808;
                    }
                } else {
                    if (input[6] < -1.9588077) {
                        var64 = 0.013676915;
                    } else {
                        var64 = 0.045326047;
                    }
                }
            } else {
                var64 = -0.045271263;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[5] < 0.3717797) {
                if (input[2] < -2.0135303) {
                    if (input[2] < -2.247923) {
                        var64 = -0.008897822;
                    } else {
                        var64 = 0.052504677;
                    }
                } else {
                    if (input[3] < 1.3087254) {
                        var64 = -0.041645378;
                    } else {
                        var64 = 0.027526464;
                    }
                }
            } else {
                if (input[6] < 0.15669641) {
                    if (input[7] < 2.0830097) {
                        var64 = -0.035455085;
                    } else {
                        var64 = 0.019300591;
                    }
                } else {
                    if (input[2] < 0.3694625) {
                        var64 = 0.025414241;
                    } else {
                        var64 = -0.041122884;
                    }
                }
            }
        } else {
            if (input[1] < 2.2881737) {
                if (input[2] < -1.5667169) {
                    var64 = -0.04464176;
                } else {
                    var64 = -0.043693915;
                }
            } else {
                var64 = -0.0434389;
            }
        }
    }
    double var65;
    if (input[1] < 1.3463372) {
        if (input[3] < 1.146763) {
            if (input[1] < 1.2797261) {
                if (input[1] < 0.21375905) {
                    var65 = -0.04338636;
                } else {
                    var65 = -0.043971684;
                }
            } else {
                if (input[6] < 1.1475737) {
                    var65 = -0.0433007;
                } else {
                    if (input[7] < 2.4166398) {
                        var65 = 0.059891224;
                    } else {
                        var65 = -0.03880581;
                    }
                }
            }
        } else {
            if (input[1] < 1.2797261) {
                if (input[4] < 1.8737624) {
                    var65 = -0.045692768;
                } else {
                    var65 = -0.044632602;
                }
            } else {
                if (input[3] < 1.7358835) {
                    if (input[5] < 0.7004639) {
                        var65 = 0.014002636;
                    } else {
                        var65 = -0.042633865;
                    }
                } else {
                    var65 = -0.04599144;
                }
            }
        }
    } else {
        if (input[4] < 2.9273717) {
            if (input[6] < -0.5164247) {
                if (input[6] < -0.7188839) {
                    if (input[7] < 0.28961524) {
                        var65 = -0.0058281356;
                    } else {
                        var65 = 0.048952807;
                    }
                } else {
                    if (input[4] < 1.1679293) {
                        var65 = -0.04184403;
                    } else {
                        var65 = 0.046542007;
                    }
                }
            } else {
                if (input[6] < 1.0421718) {
                    if (input[7] < 2.0830097) {
                        var65 = 0.027770292;
                    } else {
                        var65 = 0.0131315775;
                    }
                } else {
                    if (input[6] < 1.131379) {
                        var65 = 0.040581413;
                    } else {
                        var65 = 0.049400046;
                    }
                }
            }
        } else {
            if (input[6] < 0.14144441) {
                if (input[6] < -0.056063637) {
                    var65 = 0.047338713;
                } else {
                    if (input[5] < 2.1753118) {
                        var65 = 0.021325072;
                    } else {
                        var65 = 0.045524582;
                    }
                }
            } else {
                if (input[1] < 6.2633357) {
                    if (input[3] < 2.4207425) {
                        var65 = 0.045629416;
                    } else {
                        var65 = 0.031168437;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var65 = 0.04331649;
                    } else {
                        var65 = 0.04743369;
                    }
                }
            }
        }
    }
    double var66;
    if (input[4] < 0.5475403) {
        if (input[2] < -0.40193808) {
            if (input[0] < -1.380883) {
                if (input[8] < -0.99807274) {
                    if (input[5] < 0.5318467) {
                        var66 = 0.07880862;
                    } else {
                        var66 = 0.12864342;
                    }
                } else {
                    if (input[4] < -0.10842057) {
                        var66 = 0.015694616;
                    } else {
                        var66 = -0.029008232;
                    }
                }
            } else {
                if (input[6] < 0.6105327) {
                    if (input[0] < 0.6167898) {
                        var66 = 0.042763334;
                    } else {
                        var66 = 0.012827095;
                    }
                } else {
                    if (input[3] < 1.8682779) {
                        var66 = 0.009524043;
                    } else {
                        var66 = -0.035894852;
                    }
                }
            }
        } else {
            if (input[5] < 0.052108772) {
                if (input[6] < 1.2724067) {
                    if (input[0] < -1.0431122) {
                        var66 = 0.049312346;
                    } else {
                        var66 = 0.046121534;
                    }
                } else {
                    if (input[2] < 0.11512014) {
                        var66 = -0.030331794;
                    } else {
                        var66 = 0.046523385;
                    }
                }
            } else {
                if (input[6] < 0.6229602) {
                    if (input[3] < -0.2981637) {
                        var66 = 0.039478444;
                    } else {
                        var66 = 0.049424827;
                    }
                } else {
                    if (input[0] < -0.27082524) {
                        var66 = -0.029473638;
                    } else {
                        var66 = 0.033161376;
                    }
                }
            }
        }
    } else {
        if (input[0] < -0.96548903) {
            if (input[2] < -0.42880416) {
                if (input[4] < 0.9792598) {
                    if (input[8] < -1.0104756) {
                        var66 = 0.227561;
                    } else {
                        var66 = -0.032602776;
                    }
                } else {
                    if (input[6] < -2.5654123) {
                        var66 = 0.12950872;
                    } else {
                        var66 = -0.04121752;
                    }
                }
            } else {
                if (input[6] < -0.7188839) {
                    if (input[2] < -0.20537838) {
                        var66 = 0.16470714;
                    } else {
                        var66 = 0.0739085;
                    }
                } else {
                    if (input[5] < 0.13914256) {
                        var66 = 0.11322859;
                    } else {
                        var66 = -0.02069472;
                    }
                }
            }
        } else {
            if (input[4] < 2.5704267) {
                if (input[8] < -1.0101902) {
                    if (input[6] < -0.61161494) {
                        var66 = -0.04440153;
                    } else {
                        var66 = -0.015400695;
                    }
                } else {
                    if (input[6] < 0.30617934) {
                        var66 = 0.022760086;
                    } else {
                        var66 = -0.0033902093;
                    }
                }
            } else {
                if (input[6] < 0.036046036) {
                    if (input[3] < 0.58490884) {
                        var66 = 0.054339927;
                    } else {
                        var66 = -0.04199377;
                    }
                } else {
                    if (input[2] < -2.3433826) {
                        var66 = 0.0001272642;
                    } else {
                        var66 = -0.029391581;
                    }
                }
            }
        }
    }
    double var67;
    if (input[0] < -0.67573476) {
        if (input[5] < 0.052108772) {
            if (input[2] < -0.7010482) {
                if (input[0] < -1.3282267) {
                    if (input[5] < -0.25483233) {
                        var67 = -0.037826207;
                    } else {
                        var67 = 0.03832948;
                    }
                } else {
                    if (input[8] < -0.9297078) {
                        var67 = -0.03092009;
                    } else {
                        var67 = 0.045465168;
                    }
                }
            } else {
                if (input[8] < -0.71863294) {
                    if (input[1] < -0.41201654) {
                        var67 = 0.012434183;
                    } else {
                        var67 = -0.036452796;
                    }
                } else {
                    if (input[5] < -0.1815262) {
                        var67 = -0.043193106;
                    } else {
                        var67 = -0.048510697;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[5] < 0.549512) {
                    if (input[0] < -1.4695059) {
                        var67 = 0.042160492;
                    } else {
                        var67 = 0.010831141;
                    }
                } else {
                    if (input[5] < 4.014814) {
                        var67 = 0.044384055;
                    } else {
                        var67 = -0.123589434;
                    }
                }
            } else {
                var67 = -0.04492426;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[4] < 0.5475403) {
                if (input[1] < 0.676181) {
                    if (input[2] < -2.0869267) {
                        var67 = -0.008395533;
                    } else {
                        var67 = -0.041607354;
                    }
                } else {
                    if (input[8] < -1.008926) {
                        var67 = 0.049855974;
                    } else {
                        var67 = -0.0027281726;
                    }
                }
            } else {
                if (input[4] < 1.6698891) {
                    if (input[7] < 1.5765852) {
                        var67 = -0.017031724;
                    } else {
                        var67 = 0.017737998;
                    }
                } else {
                    if (input[7] < -0.13039339) {
                        var67 = -0.053487558;
                    } else {
                        var67 = 0.035359103;
                    }
                }
            }
        } else {
            if (input[1] < 2.2881737) {
                if (input[2] < -1.5667169) {
                    var67 = -0.04436449;
                } else {
                    var67 = -0.043425225;
                }
            } else {
                var67 = -0.043194044;
            }
        }
    }
    double var68;
    if (input[1] < 1.3463372) {
        if (input[3] < 0.98658097) {
            if (input[4] < -0.13455336) {
                var68 = -0.042948622;
            } else {
                if (input[0] < -1.0712166) {
                    var68 = -0.043117292;
                } else {
                    if (input[1] < 1.2797261) {
                        var68 = -0.04361229;
                    } else {
                        var68 = -0.024443647;
                    }
                }
            }
        } else {
            if (input[1] < 1.2797261) {
                if (input[4] < 1.8737624) {
                    var68 = -0.045271605;
                } else {
                    var68 = -0.04423662;
                }
            } else {
                if (input[0] < -0.59951556) {
                    if (input[7] < 2.396799) {
                        var68 = 0.09141338;
                    } else {
                        var68 = -0.02772339;
                    }
                } else {
                    if (input[8] < -1.0042704) {
                        var68 = -0.045579962;
                    } else {
                        var68 = -0.036408585;
                    }
                }
            }
        }
    } else {
        if (input[4] < 2.9528494) {
            if (input[6] < -0.5164247) {
                if (input[6] < -0.66334754) {
                    if (input[6] < -1.2559537) {
                        var68 = 0.04892042;
                    } else {
                        var68 = 0.04683241;
                    }
                } else {
                    if (input[4] < 1.1315169) {
                        var68 = -0.046184;
                    } else {
                        var68 = 0.04409227;
                    }
                }
            } else {
                if (input[6] < 1.0421718) {
                    if (input[7] < 2.0524347) {
                        var68 = 0.026854184;
                    } else {
                        var68 = 0.012437034;
                    }
                } else {
                    if (input[6] < 1.1156986) {
                        var68 = 0.038470693;
                    } else {
                        var68 = 0.048354883;
                    }
                }
            }
        } else {
            if (input[6] < 0.17229258) {
                if (input[6] < 0.036046036) {
                    if (input[6] < -0.10942445) {
                        var68 = 0.046733167;
                    } else {
                        var68 = 0.045422453;
                    }
                } else {
                    if (input[4] < 3.0935438) {
                        var68 = 0.019124115;
                    } else {
                        var68 = 0.044136886;
                    }
                }
            } else {
                if (input[1] < 6.2633357) {
                    if (input[3] < 2.4207425) {
                        var68 = 0.04525747;
                    } else {
                        var68 = 0.029668206;
                    }
                } else {
                    if (input[1] < 7.012119) {
                        var68 = 0.042840227;
                    } else {
                        var68 = 0.04685818;
                    }
                }
            }
        }
    }
    double var69;
    if (input[4] < 0.49741524) {
        if (input[2] < -0.40193808) {
            if (input[1] < -0.38781208) {
                if (input[6] < -0.43760318) {
                    if (input[7] < 0.13742691) {
                        var69 = 0.077669054;
                    } else {
                        var69 = 0.0015884122;
                    }
                } else {
                    if (input[7] < 0.02766323) {
                        var69 = -0.034241654;
                    } else {
                        var69 = -0.013973486;
                    }
                }
            } else {
                if (input[6] < 0.6229602) {
                    if (input[0] < -1.380883) {
                        var69 = -0.011193779;
                    } else {
                        var69 = 0.039771352;
                    }
                } else {
                    if (input[7] < 0.7355263) {
                        var69 = 0.027325133;
                    } else {
                        var69 = -0.019882254;
                    }
                }
            }
        } else {
            if (input[0] < -0.7813698) {
                if (input[6] < 0.6229602) {
                    if (input[6] < -0.10942445) {
                        var69 = 0.047245946;
                    } else {
                        var69 = 0.03869972;
                    }
                } else {
                    if (input[1] < -0.4775674) {
                        var69 = 0.0706845;
                    } else {
                        var69 = -0.020438667;
                    }
                }
            } else {
                if (input[1] < 1.3463372) {
                    if (input[4] < 0.35266468) {
                        var69 = 0.0456536;
                    } else {
                        var69 = 0.035769846;
                    }
                } else {
                    if (input[6] < 0.812421) {
                        var69 = 0.07378437;
                    } else {
                        var69 = -0.04541089;
                    }
                }
            }
        }
    } else {
        if (input[0] < -1.0431122) {
            if (input[2] < -0.42880416) {
                if (input[4] < 0.9792598) {
                    if (input[8] < -1.0104756) {
                        var69 = 0.1930326;
                    } else {
                        var69 = -0.032828987;
                    }
                } else {
                    if (input[6] < -2.5654123) {
                        var69 = 0.12222329;
                    } else {
                        var69 = -0.041053142;
                    }
                }
            } else {
                if (input[6] < 0.71290267) {
                    if (input[8] < -0.8737145) {
                        var69 = 0.13815388;
                    } else {
                        var69 = 0.03980785;
                    }
                } else {
                    if (input[6] < 2.172875) {
                        var69 = -0.030097915;
                    } else {
                        var69 = 0.07266744;
                    }
                }
            }
        } else {
            if (input[4] < 2.5704267) {
                if (input[1] < 2.4071393) {
                    if (input[6] < 0.12556082) {
                        var69 = 0.026449313;
                    } else {
                        var69 = 0.00017318403;
                    }
                } else {
                    if (input[1] < 3.6610906) {
                        var69 = -0.016074521;
                    } else {
                        var69 = -0.03704608;
                    }
                }
            } else {
                if (input[6] < 0.045781214) {
                    if (input[8] < -0.98366016) {
                        var69 = -0.041549914;
                    } else {
                        var69 = 0.034045845;
                    }
                } else {
                    if (input[2] < -2.3433826) {
                        var69 = 0.0012048741;
                    } else {
                        var69 = -0.028670961;
                    }
                }
            }
        }
    }
    double var70;
    if (input[0] < -0.67573476) {
        if (input[5] < 0.052108772) {
            if (input[6] < -0.22590312) {
                if (input[0] < -2.0029614) {
                    var70 = 0.048206575;
                } else {
                    if (input[1] < 0.040319752) {
                        var70 = -0.04394692;
                    } else {
                        var70 = -0.009932434;
                    }
                }
            } else {
                if (input[0] < -0.96548903) {
                    if (input[1] < -0.405889) {
                        var70 = 0.03119428;
                    } else {
                        var70 = 0.0045194174;
                    }
                } else {
                    if (input[6] < 1.1156986) {
                        var70 = -0.03817618;
                    } else {
                        var70 = 0.023465976;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[4] < 0.8432037) {
                    if (input[6] < 0.0067897188) {
                        var70 = 0.0010203527;
                    } else {
                        var70 = 0.034914304;
                    }
                } else {
                    if (input[3] < -0.3114714) {
                        var70 = 0.024741327;
                    } else {
                        var70 = 0.04406219;
                    }
                }
            } else {
                var70 = -0.04462285;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[4] < 0.5475403) {
                if (input[1] < 0.676181) {
                    if (input[5] < 0.052108772) {
                        var70 = -0.042236626;
                    } else {
                        var70 = -0.030488946;
                    }
                } else {
                    if (input[3] < 1.8682779) {
                        var70 = -0.0039756494;
                    } else {
                        var70 = 0.047586694;
                    }
                }
            } else {
                if (input[4] < 1.6893462) {
                    if (input[6] < 0.10035754) {
                        var70 = -0.04034378;
                    } else {
                        var70 = 0.012782027;
                    }
                } else {
                    if (input[6] < -0.42002866) {
                        var70 = -0.067897014;
                    } else {
                        var70 = 0.034641847;
                    }
                }
            }
        } else {
            if (input[1] < 2.5473828) {
                if (input[4] < 2.9273717) {
                    var70 = -0.04401694;
                } else {
                    var70 = -0.043092795;
                }
            } else {
                var70 = -0.04292199;
            }
        }
    }
    double var71;
    if (input[1] < 1.3463372) {
        if (input[3] < 0.98658097) {
            if (input[5] < -0.14566766) {
                var71 = -0.042717256;
            } else {
                var71 = -0.043113172;
            }
        } else {
            if (input[1] < 1.2797261) {
                if (input[3] < 1.4120835) {
                    var71 = -0.044074375;
                } else {
                    var71 = -0.045018885;
                }
            } else {
                if (input[3] < 1.7358835) {
                    if (input[5] < 0.7004639) {
                        var71 = 0.013330743;
                    } else {
                        var71 = -0.04097577;
                    }
                } else {
                    var71 = -0.04527619;
                }
            }
        }
    } else {
        if (input[1] < 3.2012215) {
            if (input[2] < -1.5667169) {
                if (input[6] < -0.40349558) {
                    if (input[2] < -2.637721) {
                        var71 = 0.014774623;
                    } else {
                        var71 = 0.045831535;
                    }
                } else {
                    if (input[5] < 1.3400273) {
                        var71 = 0.025891757;
                    } else {
                        var71 = 0.010977442;
                    }
                }
            } else {
                if (input[2] < -1.1946733) {
                    if (input[6] < -0.087944016) {
                        var71 = 0.045696728;
                    } else {
                        var71 = 0.03093272;
                    }
                } else {
                    if (input[3] < 3.6109262) {
                        var71 = 0.04518429;
                    } else {
                        var71 = -0.05950949;
                    }
                }
            }
        } else {
            if (input[1] < 5.322413) {
                if (input[5] < 5.0620394) {
                    if (input[6] < 0.026145756) {
                        var71 = 0.04588677;
                    } else {
                        var71 = 0.036151573;
                    }
                } else {
                    if (input[8] < -1.0169147) {
                        var71 = -0.02886799;
                    } else {
                        var71 = 0.030179793;
                    }
                }
            } else {
                if (input[1] < 6.2633357) {
                    if (input[5] < 6.3719172) {
                        var71 = 0.04517225;
                    } else {
                        var71 = -0.004926241;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var71 = 0.04483513;
                    } else {
                        var71 = 0.046377353;
                    }
                }
            }
        }
    }
    double var72;
    if (input[5] < 0.39438874) {
        if (input[2] < -0.7010482) {
            if (input[0] < -1.3545768) {
                if (input[3] < 0.6107466) {
                    if (input[7] < 0.32813305) {
                        var72 = -0.01416725;
                    } else {
                        var72 = -0.036576677;
                    }
                } else {
                    if (input[5] < 0.3466449) {
                        var72 = 0.07477253;
                    } else {
                        var72 = 0.1249945;
                    }
                }
            } else {
                if (input[7] < 1.223332) {
                    if (input[0] < -0.462735) {
                        var72 = 0.011991752;
                    } else {
                        var72 = 0.045956187;
                    }
                } else {
                    if (input[7] < 2.3772779) {
                        var72 = -0.009722431;
                    } else {
                        var72 = 0.06691069;
                    }
                }
            }
        } else {
            if (input[0] < -0.8588556) {
                if (input[6] < 0.6169543) {
                    if (input[2] < -0.40193808) {
                        var72 = 0.020215945;
                    } else {
                        var72 = 0.0459871;
                    }
                } else {
                    if (input[5] < -0.14566766) {
                        var72 = 0.048068456;
                    } else {
                        var72 = -0.022278184;
                    }
                }
            } else {
                if (input[3] < 0.8943665) {
                    if (input[6] < 0.83965254) {
                        var72 = 0.04524097;
                    } else {
                        var72 = 0.040571075;
                    }
                } else {
                    if (input[6] < 0.94139427) {
                        var72 = 0.034643315;
                    } else {
                        var72 = -0.045268323;
                    }
                }
            }
        }
    } else {
        if (input[0] < -0.5551308) {
            if (input[5] < 0.79324865) {
                if (input[0] < -1.3028098) {
                    if (input[3] < 0.35169166) {
                        var72 = -0.03732781;
                    } else {
                        var72 = 0.0027378057;
                    }
                } else {
                    if (input[6] < 0.07339017) {
                        var72 = 0.045643277;
                    } else {
                        var72 = -0.012885261;
                    }
                }
            } else {
                if (input[6] < -1.9588077) {
                    if (input[0] < -2.5301669) {
                        var72 = -0.040097814;
                    } else {
                        var72 = 0.14465584;
                    }
                } else {
                    if (input[6] < -0.6903152) {
                        var72 = -0.008690783;
                    } else {
                        var72 = -0.039930813;
                    }
                }
            }
        } else {
            if (input[5] < 2.2337024) {
                if (input[8] < -1.0095893) {
                    if (input[6] < -0.5164247) {
                        var72 = -0.04340264;
                    } else {
                        var72 = -0.013141225;
                    }
                } else {
                    if (input[6] < 0.41530117) {
                        var72 = 0.022136826;
                    } else {
                        var72 = -0.0034430735;
                    }
                }
            } else {
                if (input[6] < 0.14144441) {
                    if (input[8] < -0.9808761) {
                        var72 = -0.039746366;
                    } else {
                        var72 = 0.09250069;
                    }
                } else {
                    if (input[2] < -1.7169069) {
                        var72 = -0.002754427;
                    } else {
                        var72 = -0.033544224;
                    }
                }
            }
        }
    }
    double var73;
    if (input[0] < -0.6535061) {
        if (input[2] < -0.10417372) {
            if (input[1] < 1.3463372) {
                if (input[2] < -0.6580676) {
                    if (input[0] < -1.2494789) {
                        var73 = 0.04321639;
                    } else {
                        var73 = 0.032894056;
                    }
                } else {
                    if (input[6] < 0.08216988) {
                        var73 = -0.013600467;
                    } else {
                        var73 = 0.031028913;
                    }
                }
            } else {
                var73 = -0.044327263;
            }
        } else {
            if (input[6] < 0.14144441) {
                if (input[6] < 0.07339017) {
                    if (input[7] < -0.3266932) {
                        var73 = -0.042818207;
                    } else {
                        var73 = -0.047743816;
                    }
                } else {
                    if (input[7] < 0.048413653) {
                        var73 = -0.043640587;
                    } else {
                        var73 = 0.048944693;
                    }
                }
            } else {
                if (input[2] < 0.11512014) {
                    if (input[6] < 1.8485208) {
                        var73 = 0.021817753;
                    } else {
                        var73 = -0.07698855;
                    }
                } else {
                    if (input[6] < 0.2927059) {
                        var73 = 0.003698962;
                    } else {
                        var73 = -0.046816614;
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[7] < 0.85655856) {
                if (input[6] < 1.1006693) {
                    if (input[8] < -0.99511594) {
                        var73 = -0.0013359885;
                    } else {
                        var73 = -0.04042469;
                    }
                } else {
                    if (input[2] < 0.3694625) {
                        var73 = 0.037150815;
                    } else {
                        var73 = -0.04058762;
                    }
                }
            } else {
                if (input[6] < -0.34210262) {
                    if (input[7] < 2.006107) {
                        var73 = -0.065124825;
                    } else {
                        var73 = -0.020650884;
                    }
                } else {
                    if (input[7] < 1.7396411) {
                        var73 = 0.007312475;
                    } else {
                        var73 = 0.025546681;
                    }
                }
            }
        } else {
            if (input[1] < 2.5473828) {
                if (input[2] < -1.5667169) {
                    var73 = -0.043811902;
                } else {
                    var73 = -0.04288381;
                }
            } else {
                var73 = -0.042715456;
            }
        }
    }
    double var74;
    if (input[1] < 1.3463372) {
        if (input[3] < 0.98658097) {
            if (input[1] < 1.2797261) {
                if (input[5] < -0.14566766) {
                    var74 = -0.042505663;
                } else {
                    if (input[0] < -0.7813698) {
                        var74 = -0.04270569;
                    } else {
                        var74 = -0.04326747;
                    }
                }
            } else {
                if (input[3] < 0.95405394) {
                    var74 = -0.04081343;
                } else {
                    var74 = 0.026662525;
                }
            }
        } else {
            if (input[1] < 1.2797261) {
                if (input[4] < 1.852172) {
                    var74 = -0.04472657;
                } else {
                    var74 = -0.043668166;
                }
            } else {
                if (input[0] < -0.59951556) {
                    if (input[2] < -2.106444) {
                        var74 = -0.008506241;
                    } else {
                        var74 = 0.11382536;
                    }
                } else {
                    if (input[3] < 1.7358835) {
                        var74 = -0.033747714;
                    } else {
                        var74 = -0.04496064;
                    }
                }
            }
        }
    } else {
        if (input[4] < 3.0935438) {
            if (input[2] < -1.5667169) {
                if (input[1] < 3.0608592) {
                    if (input[5] < 1.3567985) {
                        var74 = 0.025147745;
                    } else {
                        var74 = 0.0048314896;
                    }
                } else {
                    if (input[1] < 5.322413) {
                        var74 = 0.02844604;
                    } else {
                        var74 = 0.044765256;
                    }
                }
            } else {
                if (input[2] < -1.1946733) {
                    if (input[1] < 2.2881737) {
                        var74 = 0.026708176;
                    } else {
                        var74 = 0.040927;
                    }
                } else {
                    if (input[1] < 1.3880605) {
                        var74 = 0.016594173;
                    } else {
                        var74 = 0.044890005;
                    }
                }
            }
        } else {
            if (input[2] < -2.3433826) {
                if (input[1] < 5.465226) {
                    if (input[5] < 4.366392) {
                        var74 = 0.031833433;
                    } else {
                        var74 = 0.00084252853;
                    }
                } else {
                    if (input[0] < 2.9806333) {
                        var74 = 0.02807377;
                    } else {
                        var74 = 0.04521611;
                    }
                }
            } else {
                if (input[2] < -1.6885362) {
                    if (input[7] < 2.2845242) {
                        var74 = 0.03435793;
                    } else {
                        var74 = 0.042756747;
                    }
                } else {
                    if (input[0] < 2.8639526) {
                        var74 = 0.04555701;
                    } else {
                        var74 = 0.043182377;
                    }
                }
            }
        }
    }
    double var75;
    if (input[4] < 0.49741524) {
        if (input[2] < -0.40193808) {
            if (input[1] < -0.38781208) {
                if (input[6] < -0.43760318) {
                    if (input[4] < 0.32170585) {
                        var75 = 0.07329105;
                    } else {
                        var75 = -0.0038481315;
                    }
                } else {
                    if (input[7] < 0.02766323) {
                        var75 = -0.03196574;
                    } else {
                        var75 = -0.010760249;
                    }
                }
            } else {
                if (input[6] < 0.6229602) {
                    if (input[0] < -1.4076718) {
                        var75 = -0.010361726;
                    } else {
                        var75 = 0.03752606;
                    }
                } else {
                    if (input[7] < 0.55637103) {
                        var75 = 0.033454884;
                    } else {
                        var75 = -0.015789099;
                    }
                }
            }
        } else {
            if (input[5] < 0.029720757) {
                if (input[6] < 1.2912512) {
                    if (input[5] < -0.10965646) {
                        var75 = 0.04495602;
                    } else {
                        var75 = 0.042382788;
                    }
                } else {
                    if (input[2] < 0.02173918) {
                        var75 = -0.03381375;
                    } else {
                        var75 = 0.04485638;
                    }
                }
            } else {
                if (input[6] < 0.6229602) {
                    if (input[1] < -0.31947485) {
                        var75 = 0.034655835;
                    } else {
                        var75 = 0.04680946;
                    }
                } else {
                    if (input[0] < -0.27739027) {
                        var75 = -0.029032916;
                    } else {
                        var75 = 0.034016054;
                    }
                }
            }
        }
    } else {
        if (input[0] < -1.0431122) {
            if (input[2] < -0.40193808) {
                if (input[4] < 0.9792598) {
                    if (input[0] < -1.4695059) {
                        var75 = -0.035034478;
                    } else {
                        var75 = -0.014994075;
                    }
                } else {
                    if (input[7] < -0.23059355) {
                        var75 = -0.01550744;
                    } else {
                        var75 = -0.04036696;
                    }
                }
            } else {
                if (input[6] < 0.71290267) {
                    if (input[5] < 1.0814868) {
                        var75 = 0.052402552;
                    } else {
                        var75 = 0.21610305;
                    }
                } else {
                    if (input[5] < 0.11610248) {
                        var75 = 0.10647837;
                    } else {
                        var75 = -0.026560511;
                    }
                }
            }
        } else {
            if (input[4] < 2.5704267) {
                if (input[1] < 2.4989395) {
                    if (input[6] < 0.2102253) {
                        var75 = 0.02172506;
                    } else {
                        var75 = 0.0005509055;
                    }
                } else {
                    if (input[1] < 4.6108503) {
                        var75 = -0.017987853;
                    } else {
                        var75 = -0.040598325;
                    }
                }
            } else {
                if (input[6] < 0.036046036) {
                    if (input[1] < 1.3463372) {
                        var75 = -0.0060445224;
                    } else {
                        var75 = -0.041881755;
                    }
                } else {
                    if (input[2] < -2.3433826) {
                        var75 = 0.0033620116;
                    } else {
                        var75 = -0.02705922;
                    }
                }
            }
        }
    }
    double var76;
    if (input[3] < 2.0103693) {
        if (input[2] < -0.20537838) {
            if (input[3] < 1.0583706) {
                if (input[4] < 0.88091904) {
                    if (input[3] < 0.3053208) {
                        var76 = 0.01542779;
                    } else {
                        var76 = -0.020637922;
                    }
                } else {
                    if (input[6] < -0.0036006148) {
                        var76 = 0.026789568;
                    } else {
                        var76 = 0.04156069;
                    }
                }
            } else {
                if (input[6] < -0.26205736) {
                    if (input[5] < 1.5193018) {
                        var76 = -0.055669606;
                    } else {
                        var76 = -0.04115124;
                    }
                } else {
                    if (input[5] < 0.65550596) {
                        var76 = 0.020046532;
                    } else {
                        var76 = -0.0022274177;
                    }
                }
            }
        } else {
            if (input[5] < 0.59864205) {
                if (input[2] < 0.084040545) {
                    if (input[6] < 0.6229602) {
                        var76 = -0.04214026;
                    } else {
                        var76 = 0.022557518;
                    }
                } else {
                    if (input[3] < -0.3735895) {
                        var76 = -0.042518146;
                    } else {
                        var76 = -0.035661142;
                    }
                }
            } else {
                if (input[6] < 0.11751589) {
                    if (input[7] < -0.3026839) {
                        var76 = -0.017451042;
                    } else {
                        var76 = -0.05321282;
                    }
                } else {
                    if (input[2] < 0.3694625) {
                        var76 = 0.018363645;
                    } else {
                        var76 = -0.044781126;
                    }
                }
            }
        }
    } else {
        if (input[3] < 2.3100052) {
            if (input[2] < -2.1450045) {
                if (input[5] < 1.8542025) {
                    if (input[8] < -1.0074364) {
                        var76 = 0.010695583;
                    } else {
                        var76 = -0.04202351;
                    }
                } else {
                    if (input[4] < 3.0935438) {
                        var76 = -0.049134213;
                    } else {
                        var76 = -0.042831052;
                    }
                }
            } else {
                if (input[4] < 0.5475403) {
                    if (input[7] < 1.961683) {
                        var76 = -0.04438897;
                    } else {
                        var76 = 0.039034177;
                    }
                } else {
                    if (input[8] < -1.0071208) {
                        var76 = -0.040212467;
                    } else {
                        var76 = -0.044001825;
                    }
                }
            }
        } else {
            if (input[3] < 2.3650753) {
                if (input[7] < 2.8662586) {
                    if (input[2] < -2.5880244) {
                        var76 = -0.036736842;
                    } else {
                        var76 = -0.04358179;
                    }
                } else {
                    if (input[5] < 1.1249181) {
                        var76 = 0.03728582;
                    } else {
                        var76 = -0.043544415;
                    }
                }
            } else {
                var76 = -0.042668242;
            }
        }
    }
    double var77;
    if (input[3] < 1.1894943) {
        if (input[3] < 0.8351349) {
            if (input[3] < 0.58490884) {
                if (input[0] < 0.7133335) {
                    var77 = -0.04246904;
                } else {
                    if (input[6] < 1.802359) {
                        var77 = -0.04293108;
                    } else {
                        var77 = -0.008280263;
                    }
                }
            } else {
                if (input[2] < -0.8246115) {
                    if (input[6] < -1.9588077) {
                        var77 = 0.023731012;
                    } else {
                        var77 = -0.038015656;
                    }
                } else {
                    if (input[6] < 0.8209485) {
                        var77 = -0.030383717;
                    } else {
                        var77 = 0.009752507;
                    }
                }
            }
        } else {
            if (input[6] < -0.6903152) {
                if (input[2] < -2.2665179) {
                    if (input[3] < 1.0583706) {
                        var77 = -0.0458992;
                    } else {
                        var77 = 0.02817265;
                    }
                } else {
                    if (input[8] < -0.9902522) {
                        var77 = 0.04261635;
                    } else {
                        var77 = -0.00035494732;
                    }
                }
            } else {
                if (input[2] < -0.74347) {
                    if (input[2] < -1.5667169) {
                        var77 = -0.03698917;
                    } else {
                        var77 = -0.019124225;
                    }
                } else {
                    if (input[6] < 1.7518744) {
                        var77 = 0.008724438;
                    } else {
                        var77 = 0.041268848;
                    }
                }
            }
        }
    } else {
        if (input[5] < 2.203816) {
            if (input[3] < 2.0332208) {
                if (input[2] < -1.7761412) {
                    if (input[8] < -1.0104756) {
                        var77 = 0.01786058;
                    } else {
                        var77 = -0.02123976;
                    }
                } else {
                    if (input[6] < 1.084771) {
                        var77 = 0.012034088;
                    } else {
                        var77 = 0.045453265;
                    }
                }
            } else {
                if (input[6] < -0.49629098) {
                    if (input[4] < 0.5222699) {
                        var77 = 0.013127647;
                    } else {
                        var77 = 0.046218183;
                    }
                } else {
                    if (input[6] < 0.43373632) {
                        var77 = 0.000011549438;
                    } else {
                        var77 = 0.025989441;
                    }
                }
            }
        } else {
            if (input[6] < 0.14144441) {
                if (input[6] < -0.056063637) {
                    if (input[0] < -1.3282267) {
                        var77 = -0.037788704;
                    } else {
                        var77 = 0.04478197;
                    }
                } else {
                    if (input[4] < 1.7862525) {
                        var77 = -0.020838913;
                    } else {
                        var77 = 0.039995216;
                    }
                }
            } else {
                if (input[2] < -1.7169069) {
                    if (input[3] < 4.3857894) {
                        var77 = 0.006570208;
                    } else {
                        var77 = 0.039247993;
                    }
                } else {
                    if (input[3] < 1.4811105) {
                        var77 = 0.012073413;
                    } else {
                        var77 = 0.039549462;
                    }
                }
            }
        }
    }
    double var78;
    if (input[4] < 0.49741524) {
        if (input[2] < -0.40193808) {
            if (input[6] < 0.6355978) {
                if (input[0] < -1.6535618) {
                    if (input[3] < 0.37016472) {
                        var78 = -0.030906187;
                    } else {
                        var78 = 0.1083865;
                    }
                } else {
                    if (input[0] < 0.6167898) {
                        var78 = 0.037970357;
                    } else {
                        var78 = 0.009209892;
                    }
                }
            } else {
                if (input[6] < 1.1647528) {
                    if (input[7] < 0.9131286) {
                        var78 = 0.03311154;
                    } else {
                        var78 = -0.019710079;
                    }
                } else {
                    if (input[4] < -0.13455336) {
                        var78 = 0.03324369;
                    } else {
                        var78 = -0.02986755;
                    }
                }
            }
        } else {
            if (input[0] < -0.7813698) {
                if (input[6] < 0.6169543) {
                    if (input[6] < -0.10942445) {
                        var78 = 0.045826863;
                    } else {
                        var78 = 0.0358752;
                    }
                } else {
                    if (input[4] < -0.16056372) {
                        var78 = 0.058213744;
                    } else {
                        var78 = -0.020209944;
                    }
                }
            } else {
                if (input[8] < -0.97955114) {
                    if (input[6] < 1.0159308) {
                        var78 = 0.055154044;
                    } else {
                        var78 = -0.04868969;
                    }
                } else {
                    if (input[4] < 0.35266468) {
                        var78 = 0.044236794;
                    } else {
                        var78 = 0.032820106;
                    }
                }
            }
        }
    } else {
        if (input[0] < -1.0431122) {
            if (input[2] < -0.40193808) {
                if (input[4] < 0.9792598) {
                    if (input[8] < -1.0121691) {
                        var78 = 0.17877465;
                    } else {
                        var78 = -0.030495629;
                    }
                } else {
                    if (input[7] < -0.25291106) {
                        var78 = -0.006058789;
                    } else {
                        var78 = -0.04006774;
                    }
                }
            } else {
                if (input[6] < 0.7059682) {
                    if (input[0] < -1.2185669) {
                        var78 = 0.116404735;
                    } else {
                        var78 = 0.032701217;
                    }
                } else {
                    if (input[6] < 2.2861269) {
                        var78 = -0.0238915;
                    } else {
                        var78 = 0.13554724;
                    }
                }
            }
        } else {
            if (input[4] < 2.6368508) {
                if (input[6] < 1.1006693) {
                    if (input[8] < -1.0101902) {
                        var78 = -0.014182351;
                    } else {
                        var78 = 0.0098562;
                    }
                } else {
                    if (input[2] < 0.49787998) {
                        var78 = -0.031309444;
                    } else {
                        var78 = 0.04997259;
                    }
                }
            } else {
                if (input[6] < 0.036046036) {
                    if (input[3] < 0.58490884) {
                        var78 = 0.054414783;
                    } else {
                        var78 = -0.040832933;
                    }
                } else {
                    if (input[2] < -2.3433826) {
                        var78 = 0.0018632064;
                    } else {
                        var78 = -0.026551869;
                    }
                }
            }
        }
    }
    double var79;
    if (input[0] < -0.6535061) {
        if (input[5] < 0.07409769) {
            if (input[6] < -0.23816568) {
                if (input[0] < -1.936442) {
                    if (input[6] < -0.3009742) {
                        var79 = 0.04699478;
                    } else {
                        var79 = 0.026494749;
                    }
                } else {
                    if (input[4] < 0.41091022) {
                        var79 = -0.043481886;
                    } else {
                        var79 = -0.024501592;
                    }
                }
            } else {
                if (input[0] < -0.96548903) {
                    if (input[1] < -0.405889) {
                        var79 = 0.028848777;
                    } else {
                        var79 = 0.0031455457;
                    }
                } else {
                    if (input[6] < 1.0560412) {
                        var79 = -0.03696748;
                    } else {
                        var79 = 0.015760118;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[4] < 0.9190091) {
                    if (input[6] < 0.0067897188) {
                        var79 = 0.00049013656;
                    } else {
                        var79 = 0.032861326;
                    }
                } else {
                    if (input[2] < -0.45470515) {
                        var79 = 0.04278932;
                    } else {
                        var79 = 0.021795187;
                    }
                }
            } else {
                var79 = -0.0441611;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[4] < 0.26215616) {
                if (input[2] < -0.7850605) {
                    if (input[0] < -0.48600048) {
                        var79 = 0.059347786;
                    } else {
                        var79 = -0.033957362;
                    }
                } else {
                    if (input[4] < -0.035299126) {
                        var79 = -0.042161293;
                    } else {
                        var79 = -0.03920287;
                    }
                }
            } else {
                if (input[4] < 1.4531306) {
                    if (input[6] < 0.054918017) {
                        var79 = -0.043734353;
                    } else {
                        var79 = 0.00537427;
                    }
                } else {
                    if (input[6] < -0.34210262) {
                        var79 = -0.054427866;
                    } else {
                        var79 = 0.029312247;
                    }
                }
            }
        } else {
            if (input[1] < 2.2494037) {
                if (input[2] < -1.5667169) {
                    var79 = -0.04357516;
                } else {
                    var79 = -0.042639356;
                }
            } else {
                var79 = -0.042413473;
            }
        }
    }
    double var80;
    if (input[1] < 1.3463372) {
        if (input[3] < 0.98658097) {
            var80 = -0.042399667;
        } else {
            if (input[1] < 1.2797261) {
                var80 = -0.044051323;
            } else {
                if (input[0] < -0.59951556) {
                    if (input[2] < -2.2572403) {
                        var80 = -0.02574367;
                    } else {
                        var80 = 0.088440314;
                    }
                } else {
                    if (input[3] < 1.7358835) {
                        var80 = -0.03438049;
                    } else {
                        var80 = -0.04465579;
                    }
                }
            }
        }
    } else {
        if (input[1] < 3.2012215) {
            if (input[2] < -1.5667169) {
                if (input[6] < -0.40349558) {
                    if (input[6] < -0.61161494) {
                        var80 = 0.04572677;
                    } else {
                        var80 = 0.03160848;
                    }
                } else {
                    if (input[5] < 1.3400273) {
                        var80 = 0.0233933;
                    } else {
                        var80 = 0.0077610943;
                    }
                }
            } else {
                if (input[2] < -1.167169) {
                    if (input[6] < -0.076917596) {
                        var80 = 0.04419095;
                    } else {
                        var80 = 0.027478844;
                    }
                } else {
                    if (input[6] < 0.8689957) {
                        var80 = 0.041612305;
                    } else {
                        var80 = 0.046686176;
                    }
                }
            }
        } else {
            if (input[1] < 4.8541236) {
                if (input[6] < 0.026145756) {
                    if (input[6] < -0.056063637) {
                        var80 = 0.044498604;
                    } else {
                        var80 = 0.03902699;
                    }
                } else {
                    if (input[3] < 3.233843) {
                        var80 = 0.04101397;
                    } else {
                        var80 = 0.02062379;
                    }
                }
            } else {
                if (input[5] < 5.630825) {
                    if (input[1] < 5.465226) {
                        var80 = 0.042870007;
                    } else {
                        var80 = 0.044819698;
                    }
                } else {
                    if (input[0] < 3.0979455) {
                        var80 = -0.024950266;
                    } else {
                        var80 = 0.042361848;
                    }
                }
            }
        }
    }
    double var81;
    if (input[4] < 0.35266468) {
        if (input[0] < -0.88397586) {
            if (input[6] < 0.31282315) {
                if (input[0] < -1.8243362) {
                    if (input[1] < -0.29771042) {
                        var81 = -0.033326555;
                    } else {
                        var81 = 0.10468978;
                    }
                } else {
                    if (input[5] < 0.3216767) {
                        var81 = 0.04227116;
                    } else {
                        var81 = 0.09963453;
                    }
                }
            } else {
                if (input[8] < -0.9968573) {
                    if (input[6] < 0.41530117) {
                        var81 = 0.011482179;
                    } else {
                        var81 = 0.104964845;
                    }
                } else {
                    if (input[6] < 1.2545375) {
                        var81 = -0.002026721;
                    } else {
                        var81 = -0.030530892;
                    }
                }
            }
        } else {
            if (input[1] < 0.6457461) {
                if (input[7] < 0.6531036) {
                    if (input[0] < -0.7813698) {
                        var81 = 0.034953434;
                    } else {
                        var81 = 0.043723065;
                    }
                } else {
                    if (input[0] < -0.4741394) {
                        var81 = -0.027359275;
                    } else {
                        var81 = 0.04416945;
                    }
                }
            } else {
                if (input[6] < 0.6551521) {
                    if (input[6] < 0.17971735) {
                        var81 = -0.012741798;
                    } else {
                        var81 = 0.04868595;
                    }
                } else {
                    if (input[8] < -1.0134019) {
                        var81 = 0.09587867;
                    } else {
                        var81 = -0.030092677;
                    }
                }
            }
        }
    } else {
        if (input[0] < -1.0431122) {
            if (input[4] < 0.9792598) {
                if (input[0] < -1.4369595) {
                    if (input[8] < -1.0084236) {
                        var81 = 0.14087209;
                    } else {
                        var81 = -0.032712135;
                    }
                } else {
                    if (input[6] < -0.2877311) {
                        var81 = 0.051934686;
                    } else {
                        var81 = -0.012050786;
                    }
                }
            } else {
                if (input[7] < -0.23059355) {
                    if (input[5] < 0.51331776) {
                        var81 = 0.28788888;
                    } else {
                        var81 = -0.0132109225;
                    }
                } else {
                    if (input[4] < 5.129466) {
                        var81 = -0.03926033;
                    } else {
                        var81 = 0.15832178;
                    }
                }
            }
        } else {
            if (input[4] < 2.6867108) {
                if (input[1] < 2.4989395) {
                    if (input[6] < 1.1995361) {
                        var81 = 0.009166215;
                    } else {
                        var81 = -0.024617972;
                    }
                } else {
                    if (input[1] < 4.4960747) {
                        var81 = -0.015324972;
                    } else {
                        var81 = -0.038010735;
                    }
                }
            } else {
                if (input[6] < 0.036046036) {
                    if (input[8] < -0.98366016) {
                        var81 = -0.040440608;
                    } else {
                        var81 = 0.062946945;
                    }
                } else {
                    if (input[1] < 6.2633357) {
                        var81 = -0.018283516;
                    } else {
                        var81 = -0.041436765;
                    }
                }
            }
        }
    }
    double var82;
    if (input[0] < -0.6359057) {
        if (input[4] < -0.011599243) {
            if (input[2] < -0.37063894) {
                if (input[1] < -0.39088076) {
                    if (input[6] < -0.10942445) {
                        var82 = -0.0326514;
                    } else {
                        var82 = 0.040329084;
                    }
                } else {
                    if (input[7] < 0.9519198) {
                        var82 = -0.047546864;
                    } else {
                        var82 = 0.02639368;
                    }
                }
            } else {
                if (input[4] < -0.16056372) {
                    if (input[6] < 0.6229602) {
                        var82 = -0.041712712;
                    } else {
                        var82 = -0.046686955;
                    }
                } else {
                    if (input[6] < 0.84900665) {
                        var82 = -0.034634996;
                    } else {
                        var82 = 0.02998702;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[4] < 0.8432037) {
                    if (input[0] < -1.380883) {
                        var82 = 0.03542136;
                    } else {
                        var82 = 0.005701512;
                    }
                } else {
                    if (input[2] < -0.40193808) {
                        var82 = 0.042000785;
                    } else {
                        var82 = 0.018128583;
                    }
                }
            } else {
                var82 = -0.043901373;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[4] < 0.26215616) {
                if (input[2] < -0.7850605) {
                    if (input[0] < -0.48600048) {
                        var82 = 0.061158266;
                    } else {
                        var82 = -0.033524055;
                    }
                } else {
                    if (input[4] < -0.035299126) {
                        var82 = -0.041997533;
                    } else {
                        var82 = -0.038507108;
                    }
                }
            } else {
                if (input[4] < 1.6893462) {
                    if (input[6] < 0.054918017) {
                        var82 = -0.0412956;
                    } else {
                        var82 = 0.0067709433;
                    }
                } else {
                    if (input[6] < -0.53822607) {
                        var82 = -0.07364961;
                    } else {
                        var82 = 0.031093035;
                    }
                }
            }
        } else {
            if (input[1] < 2.5473828) {
                if (input[2] < -1.5667169) {
                    var82 = -0.043306675;
                } else {
                    var82 = -0.04238192;
                }
            } else {
                var82 = -0.042192545;
            }
        }
    }
    double var83;
    if (input[1] < 1.3463372) {
        if (input[3] < 0.98658097) {
            if (input[1] < 1.2797261) {
                var83 = -0.042239327;
            } else {
                if (input[3] < 0.95405394) {
                    var83 = -0.040288948;
                } else {
                    var83 = 0.029051678;
                }
            }
        } else {
            if (input[1] < 1.2797261) {
                var83 = -0.04383619;
            } else {
                if (input[0] < -0.59951556) {
                    if (input[2] < -2.106444) {
                        var83 = -0.009767279;
                    } else {
                        var83 = 0.10409665;
                    }
                } else {
                    if (input[8] < -1.0042704) {
                        var83 = -0.044413973;
                    } else {
                        var83 = -0.033192378;
                    }
                }
            }
        }
    } else {
        if (input[4] < 3.1504886) {
            if (input[2] < -1.5667169) {
                if (input[1] < 4.6108503) {
                    if (input[5] < 1.3400273) {
                        var83 = 0.02315341;
                    } else {
                        var83 = 0.006109398;
                    }
                } else {
                    if (input[5] < 5.630825) {
                        var83 = 0.04244817;
                    } else {
                        var83 = 0.00336609;
                    }
                }
            } else {
                if (input[2] < -1.1946733) {
                    if (input[1] < 2.2881737) {
                        var83 = 0.024139736;
                    } else {
                        var83 = 0.038126588;
                    }
                } else {
                    if (input[1] < 1.3880605) {
                        var83 = 0.0198791;
                    } else {
                        var83 = 0.043205567;
                    }
                }
            }
        } else {
            if (input[2] < -1.898552) {
                if (input[1] < 4.6108503) {
                    if (input[5] < 4.2848186) {
                        var83 = 0.033124413;
                    } else {
                        var83 = 0.010510241;
                    }
                } else {
                    if (input[5] < 6.3719172) {
                        var83 = 0.04348358;
                    } else {
                        var83 = 0.033119228;
                    }
                }
            } else {
                if (input[3] < 2.4957194) {
                    if (input[8] < -0.98158354) {
                        var83 = 0.04424115;
                    } else {
                        var83 = -0.011789997;
                    }
                } else {
                    if (input[1] < 3.128257) {
                        var83 = 0.033909738;
                    } else {
                        var83 = 0.04184225;
                    }
                }
            }
        }
    }
    double var84;
    if (input[2] < -0.30732393) {
        if (input[4] < 2.4660504) {
            if (input[1] < -0.31262922) {
                if (input[4] < 0.41091022) {
                    if (input[1] < -0.38781208) {
                        var84 = -0.016022777;
                    } else {
                        var84 = 0.029433765;
                    }
                } else {
                    if (input[2] < -0.6793288) {
                        var84 = -0.037430454;
                    } else {
                        var84 = -0.017907662;
                    }
                }
            } else {
                if (input[4] < 0.59291244) {
                    if (input[1] < 0.676181) {
                        var84 = 0.03012458;
                    } else {
                        var84 = -0.004281592;
                    }
                } else {
                    if (input[1] < 3.2012215) {
                        var84 = -0.0012519063;
                    } else {
                        var84 = -0.03132729;
                    }
                }
            }
        } else {
            if (input[3] < 1.791475) {
                if (input[4] < 6.366106) {
                    if (input[7] < 0.4233683) {
                        var84 = -0.021209158;
                    } else {
                        var84 = -0.037937067;
                    }
                } else {
                    if (input[7] < 0.85655856) {
                        var84 = 0.30727452;
                    } else {
                        var84 = -0.039811186;
                    }
                }
            } else {
                if (input[4] < 3.1504886) {
                    if (input[1] < 2.8653188) {
                        var84 = 0.024329837;
                    } else {
                        var84 = -0.019955525;
                    }
                } else {
                    if (input[1] < 6.2633357) {
                        var84 = -0.02615153;
                    } else {
                        var84 = -0.04156893;
                    }
                }
            }
        }
    } else {
        if (input[5] < 0.83887666) {
            if (input[2] < 0.084040545) {
                if (input[3] < -0.18207252) {
                    if (input[4] < -0.08310837) {
                        var84 = 0.04245217;
                    } else {
                        var84 = 0.0030873956;
                    }
                } else {
                    if (input[1] < 1.3880605) {
                        var84 = 0.04660854;
                    } else {
                        var84 = -0.037690774;
                    }
                }
            } else {
                if (input[5] < 0.549512) {
                    if (input[3] < -0.3735895) {
                        var84 = 0.044012103;
                    } else {
                        var84 = 0.040262256;
                    }
                } else {
                    if (input[4] < 0.9792598) {
                        var84 = 0.0051534246;
                    } else {
                        var84 = 0.05235539;
                    }
                }
            }
        } else {
            if (input[8] < -0.98366016) {
                if (input[5] < 1.0950221) {
                    if (input[7] < 0.79835683) {
                        var84 = -0.006445292;
                    } else {
                        var84 = 0.09896517;
                    }
                } else {
                    if (input[1] < 1.707638) {
                        var84 = -0.027920047;
                    } else {
                        var84 = -0.041002974;
                    }
                }
            } else {
                if (input[2] < 0.3694625) {
                    if (input[8] < -0.8672436) {
                        var84 = 0.018299898;
                    } else {
                        var84 = -0.024393694;
                    }
                } else {
                    if (input[7] < 2.1133723) {
                        var84 = 0.059860304;
                    } else {
                        var84 = -0.026138775;
                    }
                }
            }
        }
    }
    double var85;
    if (input[0] < -0.6359057) {
        if (input[5] < 0.07409769) {
            if (input[2] < -0.7010482) {
                if (input[0] < -1.3282267) {
                    if (input[2] < -2.3129985) {
                        var85 = -0.08291735;
                    } else {
                        var85 = 0.03297699;
                    }
                } else {
                    if (input[3] < -0.11250562) {
                        var85 = 0.042623155;
                    } else {
                        var85 = -0.028750965;
                    }
                }
            } else {
                if (input[6] < 1.2912512) {
                    if (input[2] < -0.40193808) {
                        var85 = -0.010741516;
                    } else {
                        var85 = -0.040009625;
                    }
                } else {
                    if (input[3] < -0.4208889) {
                        var85 = -0.048563566;
                    } else {
                        var85 = 0.04287235;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[5] < 0.549512) {
                    if (input[0] < -1.4695059) {
                        var85 = 0.036970977;
                    } else {
                        var85 = 0.005904931;
                    }
                } else {
                    if (input[6] < -1.9588077) {
                        var85 = -0.004963894;
                    } else {
                        var85 = 0.0406673;
                    }
                }
            } else {
                var85 = -0.043690808;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[7] < 0.85655856) {
                if (input[5] < 0.82415235) {
                    if (input[5] < 0.007825906) {
                        var85 = -0.04131855;
                    } else {
                        var85 = -0.030107545;
                    }
                } else {
                    if (input[6] < 1.084771) {
                        var85 = -0.025257455;
                    } else {
                        var85 = 0.041539837;
                    }
                }
            } else {
                if (input[7] < 1.7396411) {
                    if (input[6] < 0.06387657) {
                        var85 = -0.03648412;
                    } else {
                        var85 = 0.0075258357;
                    }
                } else {
                    if (input[2] < -2.6795688) {
                        var85 = -0.042381786;
                    } else {
                        var85 = 0.023780577;
                    }
                }
            }
        } else {
            if (input[1] < 2.6432352) {
                if (input[2] < -1.5667169) {
                    var85 = -0.043102823;
                } else {
                    var85 = -0.042197764;
                }
            } else {
                var85 = -0.04202764;
            }
        }
    }
    double var86;
    if (input[3] < 1.1894943) {
        if (input[3] < 0.58490884) {
            if (input[0] < 0.68187267) {
                var86 = -0.04198289;
            } else {
                if (input[5] < 1.1249181) {
                    if (input[5] < 0.97807145) {
                        var86 = -0.04229818;
                    } else {
                        var86 = -0.032120023;
                    }
                } else {
                    if (input[4] < 0.75227654) {
                        var86 = 0.03846448;
                    } else {
                        var86 = -0.04258634;
                    }
                }
            }
        } else {
            if (input[2] < -0.8049654) {
                if (input[2] < -1.88922) {
                    if (input[7] < 1.424163) {
                        var86 = -0.025838906;
                    } else {
                        var86 = -0.040076792;
                    }
                } else {
                    if (input[3] < 0.95405394) {
                        var86 = -0.031739336;
                    } else {
                        var86 = -0.0092738345;
                    }
                }
            } else {
                if (input[3] < 0.8943665) {
                    if (input[4] < 1.3048166) {
                        var86 = 0.00939883;
                    } else {
                        var86 = -0.018450264;
                    }
                } else {
                    if (input[7] < 3.3293457) {
                        var86 = 0.020982241;
                    } else {
                        var86 = -0.034505557;
                    }
                }
            }
        }
    } else {
        if (input[4] < 3.1504886) {
            if (input[8] < -1.0107547) {
                if (input[3] < 4.474041) {
                    if (input[7] < 1.9048014) {
                        var86 = 0.033694115;
                    } else {
                        var86 = 0.01748362;
                    }
                } else {
                    if (input[5] < 5.826247) {
                        var86 = 0.04289627;
                    } else {
                        var86 = 0.029057514;
                    }
                }
            } else {
                if (input[2] < -1.5667169) {
                    if (input[7] < 2.2845242) {
                        var86 = 0.0009928663;
                    } else {
                        var86 = -0.018884493;
                    }
                } else {
                    if (input[2] < -1.1237857) {
                        var86 = 0.020164985;
                    } else {
                        var86 = 0.03792021;
                    }
                }
            }
        } else {
            if (input[3] < 1.4811105) {
                if (input[2] < -2.106444) {
                    if (input[0] < 1.1365709) {
                        var86 = -0.040297747;
                    } else {
                        var86 = -0.0049306587;
                    }
                } else {
                    if (input[7] < 2.502144) {
                        var86 = 0.020697977;
                    } else {
                        var86 = -0.019087417;
                    }
                }
            } else {
                if (input[2] < -1.9074583) {
                    if (input[3] < 4.3857894) {
                        var86 = 0.026074769;
                    } else {
                        var86 = 0.0406369;
                    }
                } else {
                    if (input[2] < -1.4906932) {
                        var86 = 0.03871051;
                    } else {
                        var86 = 0.042306256;
                    }
                }
            }
        }
    }
    double var87;
    if (input[2] < -0.30732393) {
        if (input[4] < 2.4887815) {
            if (input[0] < -1.2494789) {
                if (input[4] < 0.35266468) {
                    if (input[2] < -2.2856095) {
                        var87 = 0.105475396;
                    } else {
                        var87 = -0.007913231;
                    }
                } else {
                    if (input[7] < -0.38920277) {
                        var87 = 0.10536058;
                    } else {
                        var87 = -0.03605071;
                    }
                }
            } else {
                if (input[6] < 1.131379) {
                    if (input[7] < 0.933691) {
                        var87 = 0.024371054;
                    } else {
                        var87 = 0.0017209979;
                    }
                } else {
                    if (input[1] < 1.3880605) {
                        var87 = -0.02407179;
                    } else {
                        var87 = -0.042666525;
                    }
                }
            }
        } else {
            if (input[6] < 0.06387657) {
                if (input[1] < 1.3463372) {
                    if (input[0] < 1.6390834) {
                        var87 = -0.02376943;
                    } else {
                        var87 = 0.22527254;
                    }
                } else {
                    if (input[6] < -0.087944016) {
                        var87 = -0.04178895;
                    } else {
                        var87 = -0.03414287;
                    }
                }
            } else {
                if (input[3] < 1.791475) {
                    if (input[4] < 6.366106) {
                        var87 = -0.03802352;
                    } else {
                        var87 = 0.09656625;
                    }
                } else {
                    if (input[1] < 5.322413) {
                        var87 = -0.0005844489;
                    } else {
                        var87 = -0.037285656;
                    }
                }
            }
        }
    } else {
        if (input[3] < 0.6107466) {
            if (input[4] < 0.012990164) {
                if (input[2] < 0.02173918) {
                    if (input[6] < 1.2912512) {
                        var87 = 0.041276064;
                    } else {
                        var87 = -0.012053539;
                    }
                } else {
                    var87 = 0.043479055;
                }
            } else {
                if (input[0] < -0.284326) {
                    if (input[6] < 0.054918017) {
                        var87 = 0.046723645;
                    } else {
                        var87 = -0.0034267842;
                    }
                } else {
                    if (input[6] < 1.3293022) {
                        var87 = 0.047692988;
                    } else {
                        var87 = 0.016705055;
                    }
                }
            }
        } else {
            if (input[6] < 0.812421) {
                if (input[4] < 2.2047238) {
                    if (input[1] < 2.2494037) {
                        var87 = 0.073876336;
                    } else {
                        var87 = -0.030631965;
                    }
                } else {
                    if (input[1] < 0.8440511) {
                        var87 = 0.0686996;
                    } else {
                        var87 = -0.03939618;
                    }
                }
            } else {
                if (input[0] < 0.946891) {
                    if (input[7] < 1.3186984) {
                        var87 = -0.049065046;
                    } else {
                        var87 = 0.010511509;
                    }
                } else {
                    if (input[1] < 1.4189887) {
                        var87 = 0.0531653;
                    } else {
                        var87 = -0.04211421;
                    }
                }
            }
        }
    }
    double var88;
    if (input[1] < 1.2797261) {
        if (input[5] < 0.07409769) {
            if (input[8] < -0.71863294) {
                if (input[1] < -0.38781208) {
                    if (input[6] < -0.10942445) {
                        var88 = -0.032783628;
                    } else {
                        var88 = 0.024568167;
                    }
                } else {
                    if (input[7] < 0.8945204) {
                        var88 = -0.034165286;
                    } else {
                        var88 = 0.013201023;
                    }
                }
            } else {
                var88 = -0.04178577;
            }
        } else {
            if (input[4] < 1.2727728) {
                if (input[1] < -0.26297724) {
                    if (input[8] < -0.6008304) {
                        var88 = 0.030004162;
                    } else {
                        var88 = -0.043360412;
                    }
                } else {
                    if (input[6] < 0.10035754) {
                        var88 = -0.032261726;
                    } else {
                        var88 = 0.00831212;
                    }
                }
            } else {
                if (input[8] < -0.8260985) {
                    if (input[3] < 1.2304595) {
                        var88 = 0.037958868;
                    } else {
                        var88 = 0.020200899;
                    }
                } else {
                    if (input[6] < 1.2361076) {
                        var88 = -0.039094996;
                    } else {
                        var88 = 0.0089335535;
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[6] < 0.5346818) {
                if (input[8] < -1.0097394) {
                    if (input[3] < 2.056336) {
                        var88 = -0.10862008;
                    } else {
                        var88 = 0.025483007;
                    }
                } else {
                    if (input[4] < 2.3985608) {
                        var88 = -0.07897099;
                    } else {
                        var88 = -0.002624013;
                    }
                }
            } else {
                if (input[5] < 1.3744452) {
                    if (input[7] < 1.6365258) {
                        var88 = -0.0387255;
                    } else {
                        var88 = 0.033808425;
                    }
                } else {
                    if (input[4] < 2.6130931) {
                        var88 = -0.11168097;
                    } else {
                        var88 = 0.005109476;
                    }
                }
            }
        } else {
            if (input[1] < 2.6432352) {
                if (input[4] < 2.9785826) {
                    var88 = -0.04297724;
                } else {
                    var88 = -0.042078365;
                }
            } else {
                var88 = -0.041896112;
            }
        }
    }
    double var89;
    if (input[1] < 1.3463372) {
        if (input[3] < 0.98658097) {
            if (input[1] < 1.2797261) {
                var89 = -0.041954685;
            } else {
                if (input[3] < 0.95405394) {
                    var89 = -0.03923165;
                } else {
                    var89 = 0.054834757;
                }
            }
        } else {
            if (input[1] < 1.2797261) {
                var89 = -0.043585543;
            } else {
                if (input[0] < -0.59951556) {
                    if (input[2] < -2.247923) {
                        var89 = -0.024474923;
                    } else {
                        var89 = 0.085059755;
                    }
                } else {
                    if (input[8] < -1.0042704) {
                        var89 = -0.044111952;
                    } else {
                        var89 = -0.032884218;
                    }
                }
            }
        }
    } else {
        if (input[2] < -1.833067) {
            if (input[1] < 4.272838) {
                if (input[5] < 1.0550139) {
                    if (input[7] < 2.3016891) {
                        var89 = 0.031524267;
                    } else {
                        var89 = 0.008475469;
                    }
                } else {
                    if (input[8] < -1.0107547) {
                        var89 = 0.018786369;
                    } else {
                        var89 = 0.0029047274;
                    }
                }
            } else {
                if (input[1] < 6.2633357) {
                    if (input[5] < 5.630825) {
                        var89 = 0.038236663;
                    } else {
                        var89 = -0.010932471;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var89 = 0.03997092;
                    } else {
                        var89 = 0.043929655;
                    }
                }
            }
        } else {
            if (input[2] < -1.355827) {
                if (input[1] < 2.9257214) {
                    if (input[3] < 1.578523) {
                        var89 = 0.042835336;
                    } else {
                        var89 = 0.019586276;
                    }
                } else {
                    if (input[1] < 5.465226) {
                        var89 = 0.034902886;
                    } else {
                        var89 = 0.04308377;
                    }
                }
            } else {
                if (input[5] < 2.0169249) {
                    if (input[0] < 5.813713) {
                        var89 = 0.03661455;
                    } else {
                        var89 = -0.12147139;
                    }
                } else {
                    if (input[0] < 3.2120533) {
                        var89 = 0.043663222;
                    } else {
                        var89 = 0.041196898;
                    }
                }
            }
        }
    }
    double var90;
    if (input[2] < -0.30732393) {
        if (input[4] < 2.4887815) {
            if (input[6] < 1.131379) {
                if (input[1] < -0.405889) {
                    if (input[4] < 0.5475403) {
                        var90 = -0.014760795;
                    } else {
                        var90 = -0.036369324;
                    }
                } else {
                    if (input[4] < 0.59291244) {
                        var90 = 0.022048935;
                    } else {
                        var90 = -0.001059538;
                    }
                }
            } else {
                if (input[5] < 0.76367307) {
                    if (input[3] < 0.25192553) {
                        var90 = -0.027973168;
                    } else {
                        var90 = 0.028861156;
                    }
                } else {
                    if (input[1] < 1.3880605) {
                        var90 = -0.034991886;
                    } else {
                        var90 = -0.042441655;
                    }
                }
            }
        } else {
            if (input[6] < 0.045781214) {
                if (input[1] < 1.3463372) {
                    if (input[6] < -0.3711222) {
                        var90 = 0.021048468;
                    } else {
                        var90 = -0.034860794;
                    }
                } else {
                    if (input[6] < -0.087944016) {
                        var90 = -0.04163053;
                    } else {
                        var90 = -0.03348726;
                    }
                }
            } else {
                if (input[3] < 1.791475) {
                    if (input[5] < 5.474809) {
                        var90 = -0.037458487;
                    } else {
                        var90 = 0.23978609;
                    }
                } else {
                    if (input[1] < 5.7891936) {
                        var90 = -0.0006331254;
                    } else {
                        var90 = -0.03932752;
                    }
                }
            }
        }
    } else {
        if (input[5] < 0.6269806) {
            if (input[6] < 0.6229602) {
                if (input[4] < 0.57002664) {
                    if (input[5] < -0.10965646) {
                        var90 = 0.043183602;
                    } else {
                        var90 = 0.039956745;
                    }
                } else {
                    if (input[2] < -0.010053885) {
                        var90 = 0.058620676;
                    } else {
                        var90 = 0.04735162;
                    }
                }
            } else {
                if (input[2] < 0.11512014) {
                    if (input[8] < -0.9082537) {
                        var90 = 0.045440458;
                    } else {
                        var90 = -0.015339091;
                    }
                } else {
                    if (input[1] < 0.040319752) {
                        var90 = 0.043340266;
                    } else {
                        var90 = 0.003994736;
                    }
                }
            }
        } else {
            if (input[6] < 1.1006693) {
                if (input[1] < 1.4828581) {
                    if (input[8] < -0.8911898) {
                        var90 = 0.04997836;
                    } else {
                        var90 = 0.006141523;
                    }
                } else {
                    if (input[4] < 0.7743656) {
                        var90 = 0.09211911;
                    } else {
                        var90 = -0.038788684;
                    }
                }
            } else {
                if (input[2] < 0.4512054) {
                    if (input[6] < 2.172875) {
                        var90 = -0.030478379;
                    } else {
                        var90 = 0.08902431;
                    }
                } else {
                    if (input[1] < 1.097819) {
                        var90 = 0.059964202;
                    } else {
                        var90 = -0.038650725;
                    }
                }
            }
        }
    }
    double var91;
    if (input[0] < -0.6359057) {
        if (input[4] < 0.26215616) {
            if (input[6] < 0.31282315) {
                if (input[0] < -1.8519993) {
                    if (input[1] < -0.29771042) {
                        var91 = 0.038489748;
                    } else {
                        var91 = -0.09316326;
                    }
                } else {
                    if (input[6] < -0.10942445) {
                        var91 = -0.04376595;
                    } else {
                        var91 = -0.026981635;
                    }
                }
            } else {
                if (input[8] < -0.71863294) {
                    if (input[6] < 1.131379) {
                        var91 = 0.009109374;
                    } else {
                        var91 = 0.037259202;
                    }
                } else {
                    if (input[5] < -0.0535848) {
                        var91 = -0.04384816;
                    } else {
                        var91 = -0.06242875;
                    }
                }
            }
        } else {
            if (input[1] < 1.3463372) {
                if (input[5] < 0.549512) {
                    if (input[0] < -1.3545768) {
                        var91 = 0.036378022;
                    } else {
                        var91 = 0.00048019836;
                    }
                } else {
                    if (input[6] < -1.9588077) {
                        var91 = -0.007658576;
                    } else {
                        var91 = 0.039745063;
                    }
                }
            } else {
                var91 = -0.043323673;
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[4] < 0.26215616) {
                if (input[7] < 0.69342434) {
                    if (input[5] < -0.10965646) {
                        var91 = -0.041571464;
                    } else {
                        var91 = -0.036322918;
                    }
                } else {
                    if (input[0] < -0.48600048) {
                        var91 = 0.13155504;
                    } else {
                        var91 = -0.033760294;
                    }
                }
            } else {
                if (input[4] < 1.8737624) {
                    if (input[7] < 1.5600548) {
                        var91 = -0.017485296;
                    } else {
                        var91 = 0.012953151;
                    }
                } else {
                    if (input[6] < -0.42002866) {
                        var91 = -0.06754323;
                    } else {
                        var91 = 0.030658973;
                    }
                }
            }
        } else {
            if (input[1] < 2.5950584) {
                var91 = -0.042576656;
            } else {
                var91 = -0.04177409;
            }
        }
    }
    double var92;
    if (input[3] < 1.1894943) {
        if (input[3] < 0.58490884) {
            if (input[6] < 1.8485208) {
                var92 = -0.04173303;
            } else {
                if (input[3] < 0.35169166) {
                    if (input[3] < 0.22859097) {
                        var92 = -0.041650366;
                    } else {
                        var92 = -0.029489867;
                    }
                } else {
                    if (input[4] < 0.75227654) {
                        var92 = 0.03003326;
                    } else {
                        var92 = -0.041179407;
                    }
                }
            }
        } else {
            if (input[6] < -0.81092006) {
                if (input[3] < 0.8351349) {
                    if (input[4] < 1.0945724) {
                        var92 = 0.021873765;
                    } else {
                        var92 = -0.03563168;
                    }
                } else {
                    if (input[8] < -0.99195) {
                        var92 = 0.041000623;
                    } else {
                        var92 = 0.020111687;
                    }
                }
            } else {
                if (input[2] < -0.76493245) {
                    if (input[7] < 2.0677495) {
                        var92 = -0.02636989;
                    } else {
                        var92 = -0.040367518;
                    }
                } else {
                    if (input[6] < 0.812421) {
                        var92 = -0.014869494;
                    } else {
                        var92 = 0.016384827;
                    }
                }
            }
        }
    } else {
        if (input[4] < 3.1504886) {
            if (input[6] < -0.5164247) {
                if (input[6] < -0.61161494) {
                    if (input[6] < -0.7188839) {
                        var92 = 0.04460638;
                    } else {
                        var92 = 0.03814288;
                    }
                } else {
                    if (input[4] < 1.2889661) {
                        var92 = -0.05836607;
                    } else {
                        var92 = 0.04221372;
                    }
                }
            } else {
                if (input[6] < 1.0421718) {
                    if (input[8] < -1.010336) {
                        var92 = 0.017252034;
                    } else {
                        var92 = -0.008035992;
                    }
                } else {
                    if (input[6] < 1.131379) {
                        var92 = 0.025780458;
                    } else {
                        var92 = 0.042270683;
                    }
                }
            }
        } else {
            if (input[6] < 0.17229258) {
                if (input[3] < 1.4470639) {
                    if (input[2] < -1.9700227) {
                        var92 = -0.025798801;
                    } else {
                        var92 = 0.032940432;
                    }
                } else {
                    if (input[6] < 0.036046036) {
                        var92 = 0.04322568;
                    } else {
                        var92 = 0.039258204;
                    }
                }
            } else {
                if (input[3] < 1.4811105) {
                    if (input[6] < 0.9305292) {
                        var92 = -0.022879213;
                    } else {
                        var92 = 0.023880908;
                    }
                } else {
                    if (input[2] < -1.9074583) {
                        var92 = 0.022011403;
                    } else {
                        var92 = 0.03648554;
                    }
                }
            }
        }
    }
    double var93;
    if (input[5] < 0.07409769) {
        if (input[0] < -0.96548903) {
            if (input[6] < -0.22590312) {
                if (input[0] < -1.936442) {
                    if (input[8] < -0.93226826) {
                        var93 = -0.038525213;
                    } else {
                        var93 = 0.016167777;
                    }
                } else {
                    if (input[1] < -0.013336726) {
                        var93 = 0.045171637;
                    } else {
                        var93 = 0.004978622;
                    }
                }
            } else {
                if (input[1] < -0.405889) {
                    if (input[3] < -0.4208889) {
                        var93 = 0.05769422;
                    } else {
                        var93 = -0.018189041;
                    }
                } else {
                    if (input[1] < -0.16129173) {
                        var93 = 0.04466584;
                    } else {
                        var93 = -0.02597178;
                    }
                }
            }
        } else {
            if (input[4] < -0.08310837) {
                if (input[0] < -0.939921) {
                    if (input[3] < -0.14206144) {
                        var93 = 0.043826673;
                    } else {
                        var93 = 0.0007681185;
                    }
                } else {
                    if (input[1] < 1.9583519) {
                        var93 = 0.042961493;
                    } else {
                        var93 = -0.027415995;
                    }
                }
            } else {
                if (input[6] < 1.131379) {
                    if (input[1] < 1.1223204) {
                        var93 = 0.040387448;
                    } else {
                        var93 = -0.00720654;
                    }
                } else {
                    if (input[8] < -0.7906416) {
                        var93 = -0.037329536;
                    } else {
                        var93 = 0.043632716;
                    }
                }
            }
        }
    } else {
        if (input[0] < -1.2185669) {
            if (input[4] < 0.5222699) {
                if (input[3] < 0.4066645) {
                    if (input[6] < -0.43760318) {
                        var93 = 0.059853368;
                    } else {
                        var93 = -0.017472532;
                    }
                } else {
                    if (input[5] < 0.18969864) {
                        var93 = 0.024163868;
                    } else {
                        var93 = 0.09750007;
                    }
                }
            } else {
                if (input[4] < 1.0383068) {
                    if (input[8] < -1.0104756) {
                        var93 = 0.16262773;
                    } else {
                        var93 = -0.028294269;
                    }
                } else {
                    if (input[3] < -0.35677335) {
                        var93 = 0.00077038404;
                    } else {
                        var93 = -0.038743675;
                    }
                }
            }
        } else {
            if (input[4] < 2.874527) {
                if (input[6] < 1.1006693) {
                    if (input[8] < -1.0098953) {
                        var93 = -0.009883091;
                    } else {
                        var93 = 0.01083417;
                    }
                } else {
                    if (input[5] < 0.86834145) {
                        var93 = 0.00083069195;
                    } else {
                        var93 = -0.035639662;
                    }
                }
            } else {
                if (input[6] < 0.036046036) {
                    if (input[3] < 0.6107466) {
                        var93 = 0.07514829;
                    } else {
                        var93 = -0.03987231;
                    }
                } else {
                    if (input[1] < 6.2633357) {
                        var93 = -0.016389351;
                    } else {
                        var93 = -0.040662337;
                    }
                }
            }
        }
    }
    double var94;
    if (input[0] < -0.6359057) {
        if (input[5] < 0.07409769) {
            if (input[6] < -0.23816568) {
                if (input[0] < -1.936442) {
                    if (input[3] < -0.17225008) {
                        var94 = -0.0015559603;
                    } else {
                        var94 = 0.0426967;
                    }
                } else {
                    if (input[8] < -0.97002965) {
                        var94 = -0.023223419;
                    } else {
                        var94 = -0.04277415;
                    }
                }
            } else {
                if (input[0] < -0.96548903) {
                    if (input[7] < 0.51622593) {
                        var94 = 0.009966943;
                    } else {
                        var94 = 0.03988831;
                    }
                } else {
                    if (input[6] < 1.0560412) {
                        var94 = -0.034609098;
                    } else {
                        var94 = 0.016680606;
                    }
                }
            }
        } else {
            if (input[5] < 0.549512) {
                if (input[0] < -1.5295253) {
                    if (input[3] < 0.4438656) {
                        var94 = 0.03684334;
                    } else {
                        var94 = -0.052196812;
                    }
                } else {
                    if (input[6] < 0.6169543) {
                        var94 = -0.025723401;
                    } else {
                        var94 = 0.028227372;
                    }
                }
            } else {
                if (input[3] < 1.4470639) {
                    if (input[6] < -1.9588077) {
                        var94 = -0.008873241;
                    } else {
                        var94 = 0.038356654;
                    }
                } else {
                    if (input[8] < -1.010895) {
                        var94 = -0.042224992;
                    } else {
                        var94 = -0.00032682144;
                    }
                }
            }
        }
    } else {
        if (input[3] < 2.3100052) {
            if (input[5] < 0.07409769) {
                if (input[5] < -0.10965646) {
                    if (input[7] < 1.3362511) {
                        var94 = -0.041445617;
                    } else {
                        var94 = -0.06028937;
                    }
                } else {
                    if (input[3] < -0.2981637) {
                        var94 = -0.018860826;
                    } else {
                        var94 = -0.039863244;
                    }
                }
            } else {
                if (input[0] < 1.9820464) {
                    if (input[6] < -0.24994925) {
                        var94 = -0.040847186;
                    } else {
                        var94 = 0.0046722926;
                    }
                } else {
                    if (input[3] < 1.6118222) {
                        var94 = -0.016175602;
                    } else {
                        var94 = -0.044886712;
                    }
                }
            }
        } else {
            if (input[3] < 2.3650753) {
                if (input[7] < 2.8662586) {
                    if (input[2] < -2.5880244) {
                        var94 = -0.034535732;
                    } else {
                        var94 = -0.042945776;
                    }
                } else {
                    if (input[5] < 1.1249181) {
                        var94 = 0.039243944;
                    } else {
                        var94 = -0.04318089;
                    }
                }
            } else {
                var94 = -0.041833255;
            }
        }
    }
    double var95;
    if (input[1] < 1.3463372) {
        if (input[3] < 1.146763) {
            if (input[1] < 1.2797261) {
                if (input[1] < 0.21375905) {
                    var95 = -0.041625183;
                } else {
                    var95 = -0.04223531;
                }
            } else {
                if (input[2] < -2.5739663) {
                    var95 = 0.12183923;
                } else {
                    if (input[4] < 3.618472) {
                        var95 = -0.041604817;
                    } else {
                        var95 = 0.011324347;
                    }
                }
            }
        } else {
            if (input[1] < 1.2797261) {
                var95 = -0.0434747;
            } else {
                if (input[0] < -0.59951556) {
                    if (input[0] < -0.6165523) {
                        var95 = 0.0125182625;
                    } else {
                        var95 = 0.09407651;
                    }
                } else {
                    if (input[3] < 1.4120835) {
                        var95 = -0.017305441;
                    } else {
                        var95 = -0.041459076;
                    }
                }
            }
        }
    } else {
        if (input[2] < -1.7663244) {
            if (input[1] < 4.6108503) {
                if (input[4] < 4.068308) {
                    if (input[5] < 1.3567985) {
                        var95 = 0.019890815;
                    } else {
                        var95 = 0.0026300347;
                    }
                } else {
                    if (input[3] < 3.065775) {
                        var95 = 0.041646462;
                    } else {
                        var95 = 0.025739381;
                    }
                }
            } else {
                if (input[5] < 5.826247) {
                    if (input[1] < 5.322413) {
                        var95 = 0.03648541;
                    } else {
                        var95 = 0.04284404;
                    }
                } else {
                    if (input[0] < 3.1590319) {
                        var95 = -0.062305104;
                    } else {
                        var95 = 0.03721179;
                    }
                }
            }
        } else {
            if (input[2] < -1.355827) {
                if (input[4] < 2.9785826) {
                    if (input[7] < 1.492219) {
                        var95 = 0.035220306;
                    } else {
                        var95 = 0.016812803;
                    }
                } else {
                    if (input[1] < 5.7891936) {
                        var95 = 0.03618567;
                    } else {
                        var95 = 0.04242634;
                    }
                }
            } else {
                if (input[5] < 2.0169249) {
                    if (input[0] < 5.813713) {
                        var95 = 0.035747014;
                    } else {
                        var95 = -0.087572165;
                    }
                } else {
                    if (input[0] < 3.2120533) {
                        var95 = 0.042834576;
                    } else {
                        var95 = 0.040366437;
                    }
                }
            }
        }
    }
    double var96;
    if (input[2] < -0.24199861) {
        if (input[0] < -1.3545768) {
            if (input[4] < 0.35266468) {
                if (input[2] < -2.2856095) {
                    if (input[8] < -0.99407923) {
                        var96 = 0.07146345;
                    } else {
                        var96 = 0.15623513;
                    }
                } else {
                    if (input[7] < 0.5753276) {
                        var96 = 0.009764909;
                    } else {
                        var96 = -0.02869913;
                    }
                }
            } else {
                if (input[4] < 0.9792598) {
                    if (input[8] < -1.0104756) {
                        var96 = 0.13247912;
                    } else {
                        var96 = -0.028187133;
                    }
                } else {
                    if (input[7] < -0.38920277) {
                        var96 = 0.16378722;
                    } else {
                        var96 = -0.038676746;
                    }
                }
            }
        } else {
            if (input[4] < 2.6867108) {
                if (input[6] < 1.1475737) {
                    if (input[4] < 0.59291244) {
                        var96 = 0.023756994;
                    } else {
                        var96 = 0.0019265403;
                    }
                } else {
                    if (input[5] < 1.0550139) {
                        var96 = -0.014368964;
                    } else {
                        var96 = -0.038170867;
                    }
                }
            } else {
                if (input[6] < 0.045781214) {
                    if (input[8] < -0.98301065) {
                        var96 = -0.038877778;
                    } else {
                        var96 = 0.06090505;
                    }
                } else {
                    if (input[6] < 0.67614543) {
                        var96 = -0.008304565;
                    } else {
                        var96 = -0.030696318;
                    }
                }
            }
        }
    } else {
        if (input[5] < 0.6269806) {
            if (input[2] < 0.084040545) {
                if (input[6] < 0.6229602) {
                    if (input[4] < 0.57002664) {
                        var96 = 0.041224178;
                    } else {
                        var96 = 0.05805993;
                    }
                } else {
                    if (input[0] < -0.32691297) {
                        var96 = -0.017594665;
                    } else {
                        var96 = 0.042353287;
                    }
                }
            } else {
                if (input[8] < -0.7460745) {
                    if (input[6] < 1.2724067) {
                        var96 = 0.0410156;
                    } else {
                        var96 = -0.0028564702;
                    }
                } else {
                    if (input[4] < 0.75227654) {
                        var96 = 0.04279147;
                    } else {
                        var96 = 0.049714405;
                    }
                }
            }
        } else {
            if (input[6] < 1.1156986) {
                if (input[0] < -0.42782572) {
                    if (input[6] < 0.0067897188) {
                        var96 = 0.065366104;
                    } else {
                        var96 = -0.028739259;
                    }
                } else {
                    if (input[0] < 2.1096814) {
                        var96 = 0.056278486;
                    } else {
                        var96 = -0.025168652;
                    }
                }
            } else {
                if (input[2] < 0.4512054) {
                    if (input[6] < 2.172875) {
                        var96 = -0.030357093;
                    } else {
                        var96 = 0.093918785;
                    }
                } else {
                    if (input[8] < -0.98427856) {
                        var96 = -0.03071059;
                    } else {
                        var96 = 0.059540275;
                    }
                }
            }
        }
    }
    double var97;
    if (input[1] < 1.2797261) {
        if (input[2] < 0.02173918) {
            if (input[0] < -0.42782572) {
                if (input[5] < 0.549512) {
                    if (input[0] < -1.7286664) {
                        var97 = 0.03569074;
                    } else {
                        var97 = 0.005831014;
                    }
                } else {
                    if (input[6] < -0.087944016) {
                        var97 = 0.023040656;
                    } else {
                        var97 = 0.03977378;
                    }
                }
            } else {
                if (input[7] < 1.5765852) {
                    if (input[5] < 1.1956149) {
                        var97 = -0.027321775;
                    } else {
                        var97 = 0.016075306;
                    }
                } else {
                    if (input[6] < 0.2927059) {
                        var97 = 0.004866234;
                    } else {
                        var97 = 0.024464859;
                    }
                }
            }
        } else {
            if (input[5] < 0.549512) {
                if (input[2] < 0.11512014) {
                    if (input[6] < 0.6551521) {
                        var97 = -0.03841414;
                    } else {
                        var97 = 0.017840188;
                    }
                } else {
                    if (input[3] < -0.3735895) {
                        var97 = -0.041555215;
                    } else {
                        var97 = -0.033754516;
                    }
                }
            } else {
                if (input[6] < 1.1647528) {
                    if (input[0] < -0.42782572) {
                        var97 = 0.023370657;
                    } else {
                        var97 = -0.04647383;
                    }
                } else {
                    if (input[2] < 0.4512054) {
                        var97 = 0.036340937;
                    } else {
                        var97 = -0.049961705;
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[2] < -2.5455425) {
                if (input[0] < 2.5750299) {
                    if (input[6] < -0.0036006148) {
                        var97 = -0.07823656;
                    } else {
                        var97 = -0.12162137;
                    }
                } else {
                    if (input[5] < 2.3224814) {
                        var97 = -0.0032346847;
                    } else {
                        var97 = 0.042074293;
                    }
                }
            } else {
                if (input[0] < 2.1096814) {
                    if (input[3] < 2.0332208) {
                        var97 = -0.019232042;
                    } else {
                        var97 = 0.03482608;
                    }
                } else {
                    if (input[5] < 2.3224814) {
                        var97 = -0.116660066;
                    } else {
                        var97 = -0.060566407;
                    }
                }
            }
        } else {
            if (input[1] < 2.5950584) {
                var97 = -0.042428788;
            } else {
                var97 = -0.04155871;
            }
        }
    }
    double var98;
    if (input[1] < 1.3463372) {
        if (input[3] < 0.98658097) {
            if (input[1] < 1.2797261) {
                var98 = -0.041603502;
            } else {
                if (input[6] < 1.2545375) {
                    var98 = -0.039377104;
                } else {
                    var98 = 0.030107994;
                }
            }
        } else {
            if (input[1] < 1.2797261) {
                var98 = -0.043193806;
            } else {
                if (input[3] < 1.7358835) {
                    if (input[4] < 1.2221057) {
                        var98 = -0.0073805493;
                    } else {
                        var98 = -0.040573496;
                    }
                } else {
                    var98 = -0.043743048;
                }
            }
        }
    } else {
        if (input[6] < -0.098714605) {
            if (input[4] < 1.9904836) {
                if (input[6] < -0.61161494) {
                    if (input[6] < -0.7188839) {
                        var98 = 0.044635534;
                    } else {
                        var98 = 0.021529427;
                    }
                } else {
                    if (input[2] < -1.88922) {
                        var98 = -0.060985945;
                    } else {
                        var98 = 0.021713397;
                    }
                }
            } else {
                if (input[4] < 2.2272656) {
                    if (input[6] < -0.42002866) {
                        var98 = 0.04465722;
                    } else {
                        var98 = 0.016628802;
                    }
                } else {
                    var98 = 0.043121226;
                }
            }
        } else {
            if (input[6] < 1.0421718) {
                if (input[4] < 3.3020856) {
                    if (input[4] < 1.4324757) {
                        var98 = 0.01955852;
                    } else {
                        var98 = 0.002432169;
                    }
                } else {
                    if (input[7] < 2.5465002) {
                        var98 = 0.024234021;
                    } else {
                        var98 = 0.03800732;
                    }
                }
            } else {
                if (input[6] < 1.1156986) {
                    if (input[4] < 0.9190091) {
                        var98 = -0.04590257;
                    } else {
                        var98 = 0.037519988;
                    }
                } else {
                    if (input[8] < -1.0159688) {
                        var98 = 0.04117503;
                    } else {
                        var98 = 0.044395164;
                    }
                }
            }
        }
    }
    double var99;
    if (input[5] < 0.07409769) {
        if (input[0] < -0.96548903) {
            if (input[6] < -0.22590312) {
                if (input[0] < -1.936442) {
                    if (input[8] < -0.93226826) {
                        var99 = -0.041249994;
                    } else {
                        var99 = 0.008426006;
                    }
                } else {
                    if (input[1] < -0.013336726) {
                        var99 = 0.04481405;
                    } else {
                        var99 = 0.0064448724;
                    }
                }
            } else {
                if (input[7] < 0.51622593) {
                    if (input[1] < -0.405889) {
                        var99 = -0.012687504;
                    } else {
                        var99 = 0.049222205;
                    }
                } else {
                    if (input[3] < 0.4664295) {
                        var99 = -0.034090705;
                    } else {
                        var99 = 0.06894544;
                    }
                }
            }
        } else {
            if (input[3] < -0.3735895) {
                var99 = 0.042500697;
            } else {
                if (input[6] < 1.131379) {
                    if (input[1] < -0.31262922) {
                        var99 = 0.024194436;
                    } else {
                        var99 = 0.042137764;
                    }
                } else {
                    if (input[1] < -0.34660527) {
                        var99 = -0.05772621;
                    } else {
                        var99 = 0.026720433;
                    }
                }
            }
        }
    } else {
        if (input[0] < -1.2494789) {
            if (input[5] < 0.549512) {
                if (input[0] < -2.0029614) {
                    if (input[3] < 0.42321396) {
                        var99 = -0.035368953;
                    } else {
                        var99 = 0.023400337;
                    }
                } else {
                    if (input[8] < -0.9955866) {
                        var99 = 0.080752715;
                    } else {
                        var99 = -0.007033664;
                    }
                }
            } else {
                if (input[7] < -0.38920277) {
                    if (input[7] < -0.40992263) {
                        var99 = 0.25740403;
                    } else {
                        var99 = 0.057536814;
                    }
                } else {
                    if (input[8] < -1.0130309) {
                        var99 = 0.01083612;
                    } else {
                        var99 = -0.036866166;
                    }
                }
            }
        } else {
            if (input[1] < 3.2012215) {
                if (input[6] < 1.0560412) {
                    if (input[7] < 0.9131286) {
                        var99 = 0.022293124;
                    } else {
                        var99 = 0.0009646291;
                    }
                } else {
                    if (input[5] < 0.9652041) {
                        var99 = 0.00027539686;
                    } else {
                        var99 = -0.033082798;
                    }
                }
            } else {
                if (input[1] < 5.465226) {
                    if (input[5] < 5.1879473) {
                        var99 = -0.023793314;
                    } else {
                        var99 = 0.025943112;
                    }
                } else {
                    if (input[1] < 6.5274234) {
                        var99 = -0.032308113;
                    } else {
                        var99 = -0.040987864;
                    }
                }
            }
        }
    }
    double var100;
    if (input[1] < 1.2797261) {
        if (input[2] < -0.24199861) {
            if (input[4] < 1.2727728) {
                if (input[0] < -1.380883) {
                    if (input[4] < 0.32170585) {
                        var100 = 0.017599491;
                    } else {
                        var100 = 0.036293384;
                    }
                } else {
                    if (input[8] < -1.0062863) {
                        var100 = 0.026393997;
                    } else {
                        var100 = -0.008606044;
                    }
                }
            } else {
                if (input[0] < 0.34000427) {
                    if (input[5] < 4.9419703) {
                        var100 = 0.03885987;
                    } else {
                        var100 = -0.18997103;
                    }
                } else {
                    if (input[4] < 2.3749502) {
                        var100 = 0.0052296934;
                    } else {
                        var100 = 0.034108862;
                    }
                }
            }
        } else {
            if (input[4] < -0.011599243) {
                if (input[5] < -0.1815262) {
                    if (input[5] < -0.19945322) {
                        var100 = -0.041323513;
                    } else {
                        var100 = -0.037073515;
                    }
                } else {
                    if (input[0] < -0.96548903) {
                        var100 = 0.022767786;
                    } else {
                        var100 = -0.038996585;
                    }
                }
            } else {
                if (input[0] < -0.284326) {
                    if (input[8] < -0.6008304) {
                        var100 = 0.010046908;
                    } else {
                        var100 = -0.043910287;
                    }
                } else {
                    if (input[1] < 0.40393293) {
                        var100 = -0.036914688;
                    } else {
                        var100 = 0.009418908;
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[2] < -2.5455425) {
                if (input[0] < 2.5750299) {
                    if (input[5] < 1.1249181) {
                        var100 = -0.09465207;
                    } else {
                        var100 = -0.11983993;
                    }
                } else {
                    if (input[5] < 2.3224814) {
                        var100 = 0.0031005084;
                    } else {
                        var100 = 0.04112555;
                    }
                }
            } else {
                if (input[0] < 2.1096814) {
                    if (input[7] < 1.7823663) {
                        var100 = -0.047416486;
                    } else {
                        var100 = 0.0085673155;
                    }
                } else {
                    if (input[5] < 2.3224814) {
                        var100 = -0.1104406;
                    } else {
                        var100 = -0.054402404;
                    }
                }
            }
        } else {
            if (input[1] < 2.5950584) {
                var100 = -0.042300597;
            } else {
                var100 = -0.041459825;
            }
        }
    }
    double var101;
    if (input[1] < 1.3463372) {
        if (input[3] < 0.98658097) {
            if (input[1] < 1.2797261) {
                var101 = -0.041501384;
            } else {
                if (input[3] < 0.95405394) {
                    var101 = -0.039190248;
                } else {
                    var101 = 0.04126827;
                }
            }
        } else {
            if (input[1] < 1.2797261) {
                var101 = -0.043028448;
            } else {
                if (input[0] < -0.59951556) {
                    if (input[3] < 1.515511) {
                        var101 = 0.013051242;
                    } else {
                        var101 = 0.05336605;
                    }
                } else {
                    if (input[3] < 1.7358835) {
                        var101 = -0.030824615;
                    } else {
                        var101 = -0.04359854;
                    }
                }
            }
        }
    } else {
        if (input[2] < -1.6885362) {
            if (input[1] < 4.6108503) {
                if (input[4] < 3.9138174) {
                    if (input[5] < 1.709468) {
                        var101 = 0.01578015;
                    } else {
                        var101 = -0.0014160381;
                    }
                } else {
                    if (input[3] < 3.065775) {
                        var101 = 0.039707508;
                    } else {
                        var101 = 0.022031598;
                    }
                }
            } else {
                if (input[5] < 5.630825) {
                    if (input[1] < 5.465226) {
                        var101 = 0.03669582;
                    } else {
                        var101 = 0.04258113;
                    }
                } else {
                    if (input[0] < 3.0979455) {
                        var101 = -0.0590537;
                    } else {
                        var101 = 0.035847727;
                    }
                }
            }
        } else {
            if (input[2] < -1.3056504) {
                if (input[4] < 3.0634954) {
                    if (input[7] < 1.492219) {
                        var101 = 0.03485991;
                    } else {
                        var101 = 0.01623054;
                    }
                } else {
                    if (input[1] < 5.7891936) {
                        var101 = 0.036859535;
                    } else {
                        var101 = 0.04213395;
                    }
                }
            } else {
                if (input[5] < 1.766917) {
                    if (input[0] < 5.813713) {
                        var101 = 0.03467324;
                    } else {
                        var101 = -0.18016349;
                    }
                } else {
                    if (input[0] < 3.2120533) {
                        var101 = 0.042330433;
                    } else {
                        var101 = 0.039218042;
                    }
                }
            }
        }
    }
    double var102;
    if (input[2] < -0.20537838) {
        if (input[0] < -1.2773666) {
            if (input[4] < 0.49741524) {
                if (input[8] < -0.9968573) {
                    if (input[5] < 0.3717797) {
                        var102 = 0.06843419;
                    } else {
                        var102 = 0.10637077;
                    }
                } else {
                    if (input[7] < 0.32813305) {
                        var102 = 0.010789401;
                    } else {
                        var102 = -0.025431106;
                    }
                }
            } else {
                if (input[2] < -0.40193808) {
                    if (input[7] < -0.4514569) {
                        var102 = 0.25248453;
                    } else {
                        var102 = -0.035766743;
                    }
                } else {
                    if (input[5] < 0.41578928) {
                        var102 = 0.1542522;
                    } else {
                        var102 = 0.0015643566;
                    }
                }
            }
        } else {
            if (input[4] < 2.874527) {
                if (input[1] < 3.0608592) {
                    if (input[0] < -0.33463055) {
                        var102 = -0.008413709;
                    } else {
                        var102 = 0.008776362;
                    }
                } else {
                    if (input[1] < 5.322413) {
                        var102 = -0.015628627;
                    } else {
                        var102 = -0.038751226;
                    }
                }
            } else {
                if (input[2] < -2.3226154) {
                    if (input[7] < 2.128306) {
                        var102 = 0.04495827;
                    } else {
                        var102 = -0.014338567;
                    }
                } else {
                    if (input[7] < 0.02766323) {
                        var102 = 0.16556878;
                    } else {
                        var102 = -0.027769517;
                    }
                }
            }
        }
    } else {
        if (input[5] < 0.59864205) {
            if (input[2] < 0.084040545) {
                if (input[8] < -0.89562327) {
                    if (input[1] < 1.2047282) {
                        var102 = 0.04316421;
                    } else {
                        var102 = -0.037308432;
                    }
                } else {
                    if (input[5] < -0.19945322) {
                        var102 = 0.04454834;
                    } else {
                        var102 = 0.0030677163;
                    }
                }
            } else {
                if (input[8] < -0.7460745) {
                    if (input[1] < -0.31262922) {
                        var102 = 0.016326334;
                    } else {
                        var102 = 0.040525407;
                    }
                } else {
                    if (input[4] < 0.7059395) {
                        var102 = 0.04236246;
                    } else {
                        var102 = 0.048265524;
                    }
                }
            }
        } else {
            if (input[1] < 1.4828581) {
                if (input[0] < -0.27739027) {
                    if (input[4] < 1.5644528) {
                        var102 = -0.028192379;
                    } else {
                        var102 = 0.024196967;
                    }
                } else {
                    if (input[1] < 0.35204026) {
                        var102 = 0.0472181;
                    } else {
                        var102 = 0.007759929;
                    }
                }
            } else {
                if (input[4] < 0.35266468) {
                    if (input[7] < 0.7355263) {
                        var102 = -0.034792725;
                    } else {
                        var102 = 0.08298422;
                    }
                } else {
                    if (input[5] < 1.7475541) {
                        var102 = -0.03516241;
                    } else {
                        var102 = -0.04139563;
                    }
                }
            }
        }
    }
    double var103;
    if (input[1] < 1.2797261) {
        if (input[2] < 0.02173918) {
            if (input[4] < 1.2727728) {
                if (input[0] < -1.4076718) {
                    if (input[4] < -0.10842057) {
                        var103 = -0.016328145;
                    } else {
                        var103 = 0.03294441;
                    }
                } else {
                    if (input[6] < 0.09115959) {
                        var103 = -0.036944874;
                    } else {
                        var103 = 0.0063667595;
                    }
                }
            } else {
                if (input[0] < 0.36506343) {
                    if (input[2] < -0.40193808) {
                        var103 = 0.0387222;
                    } else {
                        var103 = 0.014091091;
                    }
                } else {
                    if (input[4] < 2.3262393) {
                        var103 = 0.0035637158;
                    } else {
                        var103 = 0.03246096;
                    }
                }
            }
        } else {
            if (input[7] < -0.25291106) {
                if (input[2] < 0.11512014) {
                    if (input[6] < 1.1006693) {
                        var103 = -0.03843475;
                    } else {
                        var103 = 0.10455794;
                    }
                } else {
                    if (input[4] < 0.9993815) {
                        var103 = -0.04111169;
                    } else {
                        var103 = -0.050583497;
                    }
                }
            } else {
                if (input[6] < 1.3293022) {
                    if (input[0] < -0.40506858) {
                        var103 = -0.000254267;
                    } else {
                        var103 = -0.03827003;
                    }
                } else {
                    if (input[2] < 0.49787998) {
                        var103 = 0.029678915;
                    } else {
                        var103 = -0.046920337;
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[6] < 0.5409869) {
                if (input[8] < -1.0095893) {
                    if (input[0] < 0.68187267) {
                        var103 = -0.103858605;
                    } else {
                        var103 = 0.028687524;
                    }
                } else {
                    if (input[8] < -1.0025265) {
                        var103 = -0.07985657;
                    } else {
                        var103 = -0.028215524;
                    }
                }
            } else {
                if (input[7] < 1.7823663) {
                    if (input[8] < -1.0057251) {
                        var103 = -0.005872326;
                    } else {
                        var103 = -0.10477186;
                    }
                } else {
                    if (input[0] < 1.8591131) {
                        var103 = 0.02973589;
                    } else {
                        var103 = -0.05898103;
                    }
                }
            }
        } else {
            if (input[1] < 2.6432352) {
                var103 = -0.042171877;
            } else {
                var103 = -0.04136113;
            }
        }
    }
    double var104;
    if (input[1] < 1.3463372) {
        if (input[3] < 1.146763) {
            if (input[1] < 1.2797261) {
                var104 = -0.04143363;
            } else {
                if (input[2] < -2.5739663) {
                    var104 = 0.10285428;
                } else {
                    var104 = -0.04139322;
                }
            }
        } else {
            if (input[1] < 1.2797261) {
                var104 = -0.042978458;
            } else {
                if (input[3] < 1.7358835) {
                    if (input[5] < 0.7004639) {
                        var104 = 0.02204709;
                    } else {
                        var104 = -0.03882889;
                    }
                } else {
                    var104 = -0.043514226;
                }
            }
        }
    } else {
        if (input[6] < -0.098714605) {
            if (input[4] < 2.0963554) {
                if (input[6] < -0.61161494) {
                    if (input[6] < -0.7188839) {
                        var104 = 0.04422275;
                    } else {
                        var104 = 0.022506963;
                    }
                } else {
                    if (input[5] < 1.7278137) {
                        var104 = -0.057174426;
                    } else {
                        var104 = 0.01858502;
                    }
                }
            } else {
                if (input[4] < 2.2272656) {
                    if (input[6] < -0.40349558) {
                        var104 = 0.04439341;
                    } else {
                        var104 = 0.015996592;
                    }
                } else {
                    var104 = 0.042689852;
                }
            }
        } else {
            if (input[6] < 1.0421718) {
                if (input[1] < 4.8541236) {
                    if (input[4] < 3.9512398) {
                        var104 = 0.0060562217;
                    } else {
                        var104 = 0.02903133;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var104 = 0.02858598;
                    } else {
                        var104 = 0.042557884;
                    }
                }
            } else {
                if (input[6] < 1.1156986) {
                    if (input[4] < 0.8989866) {
                        var104 = -0.049939636;
                    } else {
                        var104 = 0.035321165;
                    }
                } else {
                    if (input[2] < -2.106444) {
                        var104 = 0.03983184;
                    } else {
                        var104 = 0.04345024;
                    }
                }
            }
        }
    }
    double var105;
    if (input[5] < 0.07409769) {
        if (input[8] < -0.71863294) {
            if (input[1] < -0.40374717) {
                if (input[6] < -0.10942445) {
                    if (input[8] < -0.9672551) {
                        var105 = -0.037004188;
                    } else {
                        var105 = 0.04742739;
                    }
                } else {
                    if (input[3] < -0.35677335) {
                        var105 = 0.0084088305;
                    } else {
                        var105 = -0.01871713;
                    }
                }
            } else {
                if (input[6] < 0.8038138) {
                    if (input[4] < 0.35266468) {
                        var105 = 0.039787654;
                    } else {
                        var105 = 0.009732679;
                    }
                } else {
                    if (input[4] < -0.08310837) {
                        var105 = 0.043979235;
                    } else {
                        var105 = -0.003948343;
                    }
                }
            }
        } else {
            if (input[5] < -0.1270127) {
                var105 = 0.04211698;
            } else {
                if (input[1] < -0.48385847) {
                    if (input[6] < 0.6105327) {
                        var105 = 0.044489965;
                    } else {
                        var105 = 0.07309567;
                    }
                } else {
                    var105 = 0.042945478;
                }
            }
        }
    } else {
        if (input[4] < 2.6867108) {
            if (input[6] < 1.1006693) {
                if (input[1] < -0.43066883) {
                    if (input[3] < -0.3419961) {
                        var105 = 0.0070994645;
                    } else {
                        var105 = -0.033311665;
                    }
                } else {
                    if (input[7] < 0.9131286) {
                        var105 = 0.017862579;
                    } else {
                        var105 = 0.00065820187;
                    }
                }
            } else {
                if (input[5] < 0.82415235) {
                    if (input[3] < -0.4056434) {
                        var105 = 0.049360316;
                    } else {
                        var105 = -0.014173408;
                    }
                } else {
                    if (input[1] < 1.3880605) {
                        var105 = -0.02985414;
                    } else {
                        var105 = -0.039956022;
                    }
                }
            }
        } else {
            if (input[6] < 0.036046036) {
                if (input[8] < -0.9935752) {
                    if (input[1] < 1.3463372) {
                        var105 = -0.02694268;
                    } else {
                        var105 = -0.04014697;
                    }
                } else {
                    if (input[7] < 0.4595119) {
                        var105 = 0.07036876;
                    } else {
                        var105 = -0.0071950755;
                    }
                }
            } else {
                if (input[3] < 2.1654973) {
                    if (input[7] < 0.048413653) {
                        var105 = 0.086528875;
                    } else {
                        var105 = -0.03252501;
                    }
                } else {
                    if (input[1] < 6.2633357) {
                        var105 = 0.00534267;
                    } else {
                        var105 = -0.039652;
                    }
                }
            }
        }
    }
    double var106;
    if (input[1] < 1.2797261) {
        if (input[2] < 0.02173918) {
            if (input[4] < 1.2400445) {
                if (input[0] < -1.4076718) {
                    if (input[4] < -0.16056372) {
                        var106 = -0.02396212;
                    } else {
                        var106 = 0.031584576;
                    }
                } else {
                    if (input[6] < 0.10903511) {
                        var106 = -0.035345275;
                    } else {
                        var106 = 0.005687441;
                    }
                }
            } else {
                if (input[0] < 0.28843397) {
                    if (input[2] < -0.40193808) {
                        var106 = 0.03828095;
                    } else {
                        var106 = 0.013298011;
                    }
                } else {
                    if (input[4] < 2.3749502) {
                        var106 = 0.003381129;
                    } else {
                        var106 = 0.03204945;
                    }
                }
            }
        } else {
            if (input[5] < 0.549512) {
                if (input[5] < -0.10965646) {
                    var106 = -0.041052423;
                } else {
                    if (input[0] < -1.0149355) {
                        var106 = 0.022563674;
                    } else {
                        var106 = -0.032042436;
                    }
                }
            } else {
                if (input[4] < 1.1132717) {
                    if (input[0] < -0.20087568) {
                        var106 = 0.04943909;
                    } else {
                        var106 = -0.028101394;
                    }
                } else {
                    if (input[1] < 0.676181) {
                        var106 = -0.03676578;
                    } else {
                        var106 = 0.029719671;
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[6] < 0.5346818) {
                if (input[8] < -1.0095893) {
                    if (input[0] < 0.68187267) {
                        var106 = -0.1001945;
                    } else {
                        var106 = 0.027400205;
                    }
                } else {
                    if (input[2] < -1.833067) {
                        var106 = -0.07678258;
                    } else {
                        var106 = -0.023707503;
                    }
                }
            } else {
                if (input[5] < 1.3744452) {
                    if (input[2] < -2.3761268) {
                        var106 = -0.05969247;
                    } else {
                        var106 = 0.029967165;
                    }
                } else {
                    if (input[4] < 2.6867108) {
                        var106 = -0.10046125;
                    } else {
                        var106 = 0.0026493089;
                    }
                }
            }
        } else {
            if (input[1] < 2.6432352) {
                var106 = -0.042064007;
            } else {
                var106 = -0.041274343;
            }
        }
    }
    double var107;
    if (input[1] < 1.3463372) {
        if (input[3] < 1.146763) {
            if (input[1] < 1.2797261) {
                var107 = -0.041344963;
            } else {
                if (input[6] < 1.1475737) {
                    var107 = -0.04056905;
                } else {
                    if (input[7] < 2.4166398) {
                        var107 = 0.0633034;
                    } else {
                        var107 = -0.03306249;
                    }
                }
            }
        } else {
            if (input[1] < 1.2797261) {
                var107 = -0.042831827;
            } else {
                if (input[0] < -0.59951556) {
                    if (input[4] < 1.0194646) {
                        var107 = -0.02707607;
                    } else {
                        var107 = 0.094487906;
                    }
                } else {
                    if (input[5] < 0.6703293) {
                        var107 = -0.03151815;
                    } else {
                        var107 = -0.042549778;
                    }
                }
            }
        }
    } else {
        if (input[6] < -0.098714605) {
            if (input[4] < 2.0740442) {
                if (input[6] < -0.61161494) {
                    if (input[6] < -0.74880636) {
                        var107 = 0.043861493;
                    } else {
                        var107 = 0.024671828;
                    }
                } else {
                    if (input[5] < 1.7278137) {
                        var107 = -0.05339825;
                    } else {
                        var107 = 0.016815994;
                    }
                }
            } else {
                if (input[4] < 2.2047238) {
                    if (input[6] < -0.38688603) {
                        var107 = 0.04323089;
                    } else {
                        var107 = 0.015655242;
                    }
                } else {
                    var107 = 0.042459097;
                }
            }
        } else {
            if (input[6] < 1.0421718) {
                if (input[1] < 4.8541236) {
                    if (input[4] < 3.9138174) {
                        var107 = 0.0050890897;
                    } else {
                        var107 = 0.027916862;
                    }
                } else {
                    if (input[1] < 6.5274234) {
                        var107 = 0.026376778;
                    } else {
                        var107 = 0.04190096;
                    }
                }
            } else {
                if (input[6] < 1.1006693) {
                    if (input[4] < 0.9190091) {
                        var107 = -0.050915737;
                    } else {
                        var107 = 0.0338565;
                    }
                } else {
                    if (input[6] < 1.1647528) {
                        var107 = 0.038973592;
                    } else {
                        var107 = 0.043270722;
                    }
                }
            }
        }
    }
    double var108;
    if (input[4] < 0.26215616) {
        if (input[0] < -0.9114438) {
            if (input[3] < -0.4208889) {
                if (input[4] < -0.011599243) {
                    var108 = 0.04248507;
                } else {
                    if (input[2] < 0.02173918) {
                        var108 = 0.07253092;
                    } else {
                        var108 = 0.047209937;
                    }
                }
            } else {
                if (input[1] < -0.405889) {
                    if (input[0] < -1.0431122) {
                        var108 = -0.0015767878;
                    } else {
                        var108 = -0.03923993;
                    }
                } else {
                    if (input[7] < 0.4233683) {
                        var108 = 0.04201883;
                    } else {
                        var108 = -0.0048135314;
                    }
                }
            }
        } else {
            if (input[1] < 1.0494871) {
                if (input[2] < -0.6580676) {
                    if (input[0] < -0.462735) {
                        var108 = -0.0036009725;
                    } else {
                        var108 = 0.043454994;
                    }
                } else {
                    if (input[0] < -0.7813698) {
                        var108 = 0.029422935;
                    } else {
                        var108 = 0.0415118;
                    }
                }
            } else {
                if (input[3] < 2.2589166) {
                    if (input[1] < 1.5113707) {
                        var108 = 0.00732433;
                    } else {
                        var108 = -0.031625126;
                    }
                } else {
                    if (input[1] < 4.0684586) {
                        var108 = 0.13325718;
                    } else {
                        var108 = -0.033393316;
                    }
                }
            }
        }
    } else {
        if (input[0] < -1.0431122) {
            if (input[2] < -0.61060196) {
                if (input[4] < 0.9792598) {
                    if (input[3] < 0.35169166) {
                        var108 = -0.025130438;
                    } else {
                        var108 = 0.018320253;
                    }
                } else {
                    if (input[7] < -0.23059355) {
                        var108 = -0.0037728793;
                    } else {
                        var108 = -0.03716847;
                    }
                }
            } else {
                if (input[4] < 3.3020856) {
                    if (input[2] < -0.40193808) {
                        var108 = -0.0128584085;
                    } else {
                        var108 = 0.013181997;
                    }
                } else {
                    var108 = 0.26728204;
                }
            }
        } else {
            if (input[4] < 3.0045075) {
                if (input[1] < 3.0608592) {
                    if (input[0] < -0.33463055) {
                        var108 = -0.009490845;
                    } else {
                        var108 = 0.009151838;
                    }
                } else {
                    if (input[1] < 5.322413) {
                        var108 = -0.012166348;
                    } else {
                        var108 = -0.03746983;
                    }
                }
            } else {
                if (input[7] < 0.048413653) {
                    if (input[2] < 0.02173918) {
                        var108 = 0.17866999;
                    } else {
                        var108 = 0.064101376;
                    }
                } else {
                    if (input[1] < 6.2633357) {
                        var108 = -0.020095332;
                    } else {
                        var108 = -0.039918423;
                    }
                }
            }
        }
    }
    double var109;
    if (input[1] < 1.2797261) {
        if (input[5] < 0.07409769) {
            if (input[0] < -0.96548903) {
                if (input[6] < -0.23816568) {
                    if (input[0] < -1.936442) {
                        var109 = 0.040474787;
                    } else {
                        var109 = -0.042609118;
                    }
                } else {
                    if (input[7] < 0.51622593) {
                        var109 = 0.00755987;
                    } else {
                        var109 = 0.034632012;
                    }
                }
            } else {
                if (input[4] < -0.08310837) {
                    if (input[0] < -0.939921) {
                        var109 = -0.017979903;
                    } else {
                        var109 = -0.040800627;
                    }
                } else {
                    if (input[6] < 1.1156986) {
                        var109 = -0.03391988;
                    } else {
                        var109 = 0.019855378;
                    }
                }
            }
        } else {
            if (input[0] < -0.42782572) {
                if (input[6] < -0.26205736) {
                    if (input[0] < -1.1870382) {
                        var109 = 0.032585107;
                    } else {
                        var109 = -0.05975754;
                    }
                } else {
                    if (input[5] < 0.778336) {
                        var109 = 0.02409805;
                    } else {
                        var109 = 0.039231792;
                    }
                }
            } else {
                if (input[7] < 1.5765852) {
                    if (input[6] < 1.1995361) {
                        var109 = -0.022088021;
                    } else {
                        var109 = 0.02519238;
                    }
                } else {
                    if (input[4] < 2.3262393) {
                        var109 = 0.011335858;
                    } else {
                        var109 = 0.035883725;
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[6] < 0.5409869) {
                if (input[3] < 2.0789537) {
                    if (input[4] < 2.0963554) {
                        var109 = -0.07116074;
                    } else {
                        var109 = -0.013138027;
                    }
                } else {
                    if (input[0] < 1.3372785) {
                        var109 = 0.020260155;
                    } else {
                        var109 = -0.09633774;
                    }
                }
            } else {
                if (input[5] < 1.5193018) {
                    if (input[0] < 1.9415337) {
                        var109 = 0.022773325;
                    } else {
                        var109 = -0.09757526;
                    }
                } else {
                    if (input[4] < 2.7794156) {
                        var109 = -0.11275909;
                    } else {
                        var109 = -0.0051900516;
                    }
                }
            }
        } else {
            if (input[1] < 2.6432352) {
                var109 = -0.041966606;
            } else {
                var109 = -0.041193884;
            }
        }
    }
    double var110;
    if (input[1] < 1.3463372) {
        if (input[0] < 0.39292353) {
            if (input[1] < 1.2797261) {
                var110 = -0.041268278;
            } else {
                if (input[8] < -1.0035703) {
                    if (input[5] < 2.148901) {
                        var110 = -0.041477244;
                    } else {
                        var110 = 0.04440334;
                    }
                } else {
                    if (input[2] < -2.3761268) {
                        var110 = 0.06540483;
                    } else {
                        var110 = -0.035735272;
                    }
                }
            }
        } else {
            if (input[1] < 1.2797261) {
                var110 = -0.042467155;
            } else {
                if (input[5] < 0.64126486) {
                    if (input[4] < 1.1679293) {
                        var110 = -0.040543422;
                    } else {
                        var110 = 0.14929304;
                    }
                } else {
                    var110 = -0.043154806;
                }
            }
        }
    } else {
        if (input[6] < -0.06638456) {
            if (input[4] < 1.9904836) {
                if (input[6] < -0.61161494) {
                    if (input[6] < -0.7188839) {
                        var110 = 0.04343586;
                    } else {
                        var110 = 0.020576393;
                    }
                } else {
                    if (input[2] < -1.898552) {
                        var110 = -0.05201403;
                    } else {
                        var110 = 0.019925611;
                    }
                }
            } else {
                if (input[4] < 2.2272656) {
                    if (input[6] < -0.40349558) {
                        var110 = 0.043675397;
                    } else {
                        var110 = 0.016390849;
                    }
                } else {
                    if (input[6] < -0.087944016) {
                        var110 = 0.042220693;
                    } else {
                        var110 = 0.0379627;
                    }
                }
            }
        } else {
            if (input[6] < 1.0421718) {
                if (input[1] < 5.322413) {
                    if (input[4] < 3.9512398) {
                        var110 = 0.0049161455;
                    } else {
                        var110 = 0.027943572;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var110 = 0.028928246;
                    } else {
                        var110 = 0.04205872;
                    }
                }
            } else {
                if (input[6] < 1.1006693) {
                    if (input[4] < 0.7743656) {
                        var110 = -0.05893753;
                    } else {
                        var110 = 0.033051603;
                    }
                } else {
                    if (input[0] < -2.48283) {
                        var110 = -0.02884;
                    } else {
                        var110 = 0.042315353;
                    }
                }
            }
        }
    }
    double var111;
    if (input[4] < 0.26215616) {
        if (input[0] < -0.9114438) {
            if (input[6] < -0.10942445) {
                if (input[0] < -2.5301669) {
                    var111 = -0.04174018;
                } else {
                    if (input[7] < -0.21024725) {
                        var111 = 0.041761816;
                    } else {
                        var111 = 0.05638862;
                    }
                }
            } else {
                if (input[1] < -0.40153253) {
                    if (input[3] < -0.4208889) {
                        var111 = 0.058042895;
                    } else {
                        var111 = -0.017339263;
                    }
                } else {
                    if (input[7] < 0.4233683) {
                        var111 = 0.039166294;
                    } else {
                        var111 = -0.010067837;
                    }
                }
            }
        } else {
            if (input[7] < 0.6731418) {
                if (input[1] < 1.4828581) {
                    if (input[4] < -0.035299126) {
                        var111 = 0.041688085;
                    } else {
                        var111 = 0.033659488;
                    }
                } else {
                    if (input[3] < 2.056336) {
                        var111 = -0.032540392;
                    } else {
                        var111 = 0.10747849;
                    }
                }
            } else {
                if (input[0] < -0.48600048) {
                    if (input[7] < 1.1532637) {
                        var111 = -0.07885342;
                    } else {
                        var111 = 0.033948682;
                    }
                } else {
                    if (input[6] < -1.6660237) {
                        var111 = -0.03813476;
                    } else {
                        var111 = 0.03802337;
                    }
                }
            }
        }
    } else {
        if (input[0] < -1.3028098) {
            if (input[4] < 0.9792598) {
                if (input[8] < -1.0104756) {
                    if (input[4] < 0.5222699) {
                        var111 = 0.084875464;
                    } else {
                        var111 = 0.14528833;
                    }
                } else {
                    if (input[8] < -0.7906416) {
                        var111 = -0.022204358;
                    } else {
                        var111 = 0.07191881;
                    }
                }
            } else {
                if (input[7] < -0.23059355) {
                    if (input[6] < 2.0247374) {
                        var111 = 0.08163074;
                    } else {
                        var111 = -0.02928448;
                    }
                } else {
                    if (input[3] < -0.2981637) {
                        var111 = -0.015830068;
                    } else {
                        var111 = -0.037619013;
                    }
                }
            }
        } else {
            if (input[4] < 2.9785826) {
                if (input[6] < 1.1475737) {
                    if (input[8] < -1.0101902) {
                        var111 = -0.008029144;
                    } else {
                        var111 = 0.0095192455;
                    }
                } else {
                    if (input[3] < -0.43554708) {
                        var111 = 0.046895213;
                    } else {
                        var111 = -0.026198417;
                    }
                }
            } else {
                if (input[6] < 0.10903511) {
                    if (input[3] < 0.58490884) {
                        var111 = 0.089929655;
                    } else {
                        var111 = -0.037857734;
                    }
                } else {
                    if (input[3] < 2.4207425) {
                        var111 = -0.028943999;
                    } else {
                        var111 = -0.005800445;
                    }
                }
            }
        }
    }
    double var112;
    if (input[1] < 1.3463372) {
        if (input[2] < 0.02173918) {
            if (input[4] < 1.2727728) {
                if (input[1] < -0.34660527) {
                    if (input[3] < -0.35677335) {
                        var112 = -0.000950791;
                    } else {
                        var112 = 0.026586432;
                    }
                } else {
                    if (input[7] < 1.3538029) {
                        var112 = -0.015809583;
                    } else {
                        var112 = 0.0098910285;
                    }
                }
            } else {
                if (input[3] < 1.2304595) {
                    if (input[2] < -0.40193808) {
                        var112 = 0.035797156;
                    } else {
                        var112 = 0.0068826787;
                    }
                } else {
                    if (input[1] < 1.2345556) {
                        var112 = 0.015458985;
                    } else {
                        var112 = -0.019105792;
                    }
                }
            }
        } else {
            if (input[5] < 0.549512) {
                if (input[5] < -0.10965646) {
                    var112 = -0.040896595;
                } else {
                    if (input[2] < 0.11512014) {
                        var112 = -0.0053656828;
                    } else {
                        var112 = -0.0333921;
                    }
                }
            } else {
                if (input[4] < 1.1132717) {
                    if (input[3] < -0.25367263) {
                        var112 = 0.040587656;
                    } else {
                        var112 = -0.029198503;
                    }
                } else {
                    if (input[1] < 0.35204026) {
                        var112 = -0.037798245;
                    } else {
                        var112 = 0.014297694;
                    }
                }
            }
        }
    } else {
        if (input[1] < 2.6432352) {
            var112 = -0.04187279;
        } else {
            var112 = -0.041120563;
        }
    }
    double var113;
    if (input[8] < -0.9935752) {
        if (input[6] < -0.27517426) {
            if (input[0] < -2.4441388) {
                if (input[2] < -2.2191432) {
                    var113 = -0.040994216;
                } else {
                    var113 = 0.007947741;
                }
            } else {
                if (input[6] < -0.5164247) {
                    if (input[4] < 1.1315169) {
                        var113 = 0.032962218;
                    } else {
                        var113 = 0.041784182;
                    }
                } else {
                    if (input[4] < 2.13786) {
                        var113 = -0.028238846;
                    } else {
                        var113 = 0.040631194;
                    }
                }
            }
        } else {
            if (input[4] < 3.2707148) {
                if (input[8] < -1.0101902) {
                    if (input[2] < -1.5347192) {
                        var113 = 0.010487749;
                    } else {
                        var113 = 0.037356973;
                    }
                } else {
                    if (input[6] < 1.084771) {
                        var113 = -0.0111978585;
                    } else {
                        var113 = 0.026605062;
                    }
                }
            } else {
                if (input[0] < -0.4741394) {
                    if (input[8] < -1.0098953) {
                        var113 = 0.04109843;
                    } else {
                        var113 = -0.02958048;
                    }
                } else {
                    if (input[2] < -2.0047894) {
                        var113 = 0.017165348;
                    } else {
                        var113 = 0.031678557;
                    }
                }
            }
        }
    } else {
        if (input[0] < 1.5049042) {
            if (input[0] < 0.47625315) {
                if (input[8] < -0.98729527) {
                    if (input[2] < -0.76493245) {
                        var113 = -0.03821593;
                    } else {
                        var113 = 0.0025344784;
                    }
                } else {
                    if (input[5] < 2.7486198) {
                        var113 = -0.04097668;
                    } else {
                        var113 = -0.03418087;
                    }
                }
            } else {
                if (input[8] < -0.98490006) {
                    if (input[2] < -0.8749784) {
                        var113 = -0.02876407;
                    } else {
                        var113 = 0.013671006;
                    }
                } else {
                    if (input[6] < 1.7518744) {
                        var113 = -0.040504407;
                    } else {
                        var113 = -0.019197166;
                    }
                }
            }
        } else {
            if (input[6] < 0.8689957) {
                if (input[5] < 1.6201149) {
                    if (input[0] < 3.1590319) {
                        var113 = -0.04293319;
                    } else {
                        var113 = -0.1135007;
                    }
                } else {
                    if (input[4] < 4.1553764) {
                        var113 = -0.009366695;
                    } else {
                        var113 = 0.04012417;
                    }
                }
            } else {
                if (input[8] < -0.97955114) {
                    if (input[4] < 3.7604346) {
                        var113 = 0.0399177;
                    } else {
                        var113 = -0.016654596;
                    }
                } else {
                    if (input[0] < 3.4614933) {
                        var113 = -0.021546023;
                    } else {
                        var113 = 0.03929916;
                    }
                }
            }
        }
    }
    double var114;
    if (input[5] < 0.07409769) {
        if (input[0] < -0.96548903) {
            if (input[6] < -0.23816568) {
                if (input[0] < -1.936442) {
                    if (input[0] < -2.2415066) {
                        var114 = 0.0012082304;
                    } else {
                        var114 = -0.03991153;
                    }
                } else {
                    if (input[1] < -0.013336726) {
                        var114 = 0.043922246;
                    } else {
                        var114 = 0.006615738;
                    }
                }
            } else {
                if (input[2] < -0.37063894) {
                    if (input[1] < -0.405889) {
                        var114 = -0.025612867;
                    } else {
                        var114 = 0.005054251;
                    }
                } else {
                    if (input[6] < 1.2912512) {
                        var114 = 0.03841784;
                    } else {
                        var114 = -0.025748653;
                    }
                }
            }
        } else {
            if (input[3] < -0.3735895) {
                var114 = 0.041650064;
            } else {
                if (input[1] < -0.31262922) {
                    if (input[6] < 1.0699776) {
                        var114 = 0.019516852;
                    } else {
                        var114 = -0.05032194;
                    }
                } else {
                    if (input[1] < 1.7998767) {
                        var114 = 0.040536452;
                    } else {
                        var114 = -0.030207884;
                    }
                }
            }
        }
    } else {
        if (input[0] < -0.42782572) {
            if (input[5] < 0.79324865) {
                if (input[0] < -1.8243362) {
                    if (input[3] < 0.35169166) {
                        var114 = -0.032852408;
                    } else {
                        var114 = 0.019943168;
                    }
                } else {
                    if (input[6] < -0.2877311) {
                        var114 = 0.031094577;
                    } else {
                        var114 = -0.005424155;
                    }
                }
            } else {
                if (input[6] < -0.7188839) {
                    if (input[0] < -1.791021) {
                        var114 = -0.0388395;
                    } else {
                        var114 = 0.11328329;
                    }
                } else {
                    if (input[5] < 4.5011315) {
                        var114 = -0.03447404;
                    } else {
                        var114 = 0.14888546;
                    }
                }
            }
        } else {
            if (input[1] < 0.5491716) {
                if (input[6] < 1.2912512) {
                    if (input[5] < 1.5348442) {
                        var114 = 0.039795347;
                    } else {
                        var114 = -0.0026153785;
                    }
                } else {
                    if (input[2] < 0.49787998) {
                        var114 = -0.018473003;
                    } else {
                        var114 = 0.04855112;
                    }
                }
            } else {
                if (input[1] < 4.8541236) {
                    if (input[2] < -1.355827) {
                        var114 = 0.0040042577;
                    } else {
                        var114 = -0.022399785;
                    }
                } else {
                    if (input[5] < 5.630825) {
                        var114 = -0.03827157;
                    } else {
                        var114 = -0.019796802;
                    }
                }
            }
        }
    }
    double var115;
    if (input[1] < 1.2797261) {
        if (input[5] < 0.07409769) {
            if (input[0] < -0.96548903) {
                if (input[6] < -0.2877311) {
                    if (input[0] < -1.936442) {
                        var115 = 0.035796013;
                    } else {
                        var115 = -0.04358583;
                    }
                } else {
                    if (input[1] < -0.16129173) {
                        var115 = 0.005826013;
                    } else {
                        var115 = 0.03257661;
                    }
                }
            } else {
                if (input[4] < -0.08310837) {
                    if (input[0] < -0.939921) {
                        var115 = -0.016740989;
                    } else {
                        var115 = -0.04063114;
                    }
                } else {
                    if (input[6] < 1.1156986) {
                        var115 = -0.032362483;
                    } else {
                        var115 = 0.023446426;
                    }
                }
            }
        } else {
            if (input[0] < -0.42782572) {
                if (input[5] < 0.79324865) {
                    if (input[0] < -1.7286664) {
                        var115 = 0.034486976;
                    } else {
                        var115 = 0.010409472;
                    }
                } else {
                    if (input[6] < -0.7188839) {
                        var115 = -0.017238328;
                    } else {
                        var115 = 0.038228203;
                    }
                }
            } else {
                if (input[1] < 0.5491716) {
                    if (input[4] < 1.5317609) {
                        var115 = -0.028976565;
                    } else {
                        var115 = 0.0129445465;
                    }
                } else {
                    if (input[0] < 1.9820464) {
                        var115 = 0.014214466;
                    } else {
                        var115 = -0.025285231;
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[3] < 2.0332208) {
                if (input[6] < 0.5346818) {
                    if (input[5] < 1.3101002) {
                        var115 = -0.07877464;
                    } else {
                        var115 = -0.03257943;
                    }
                } else {
                    if (input[5] < 1.5193018) {
                        var115 = 0.004977703;
                    } else {
                        var115 = -0.07414845;
                    }
                }
            } else {
                if (input[0] < 1.4613439) {
                    if (input[4] < 1.3048166) {
                        var115 = 0.040291138;
                    } else {
                        var115 = -0.0063978443;
                    }
                } else {
                    if (input[6] < -0.02460529) {
                        var115 = -0.06141002;
                    } else {
                        var115 = -0.10023746;
                    }
                }
            }
        } else {
            if (input[1] < 2.6432352) {
                var115 = -0.04179634;
            } else {
                var115 = -0.041054696;
            }
        }
    }
    double var116;
    if (input[3] < 1.0583706) {
        if (input[3] < 0.58490884) {
            if (input[0] < 0.68187267) {
                if (input[5] < 2.8235545) {
                    var116 = -0.040989857;
                } else {
                    if (input[6] < -0.6367732) {
                        var116 = 0.011761594;
                    } else {
                        var116 = -0.040667176;
                    }
                }
            } else {
                if (input[6] < 1.802359) {
                    var116 = -0.041324902;
                } else {
                    if (input[8] < -0.95107454) {
                        var116 = 0.027938455;
                    } else {
                        var116 = -0.04028649;
                    }
                }
            }
        } else {
            if (input[2] < -1.0108957) {
                if (input[6] < -0.32784718) {
                    if (input[3] < 0.77944803) {
                        var116 = -0.018317576;
                    } else {
                        var116 = 0.021822145;
                    }
                } else {
                    if (input[0] < -1.4369595) {
                        var116 = -0.022694105;
                    } else {
                        var116 = -0.03637656;
                    }
                }
            } else {
                if (input[4] < 1.3207659) {
                    if (input[6] < 0.7774105) {
                        var116 = -0.00556215;
                    } else {
                        var116 = 0.027720766;
                    }
                } else {
                    if (input[2] < -0.7010482) {
                        var116 = -0.028472016;
                    } else {
                        var116 = -0.0043039564;
                    }
                }
            }
        }
    } else {
        if (input[6] < -0.21405959) {
            if (input[5] < 1.8542025) {
                if (input[6] < -0.6367732) {
                    if (input[6] < -0.84659815) {
                        var116 = 0.042962316;
                    } else {
                        var116 = 0.02455347;
                    }
                } else {
                    if (input[4] < 2.2047238) {
                        var116 = -0.04862644;
                    } else {
                        var116 = 0.032663994;
                    }
                }
            } else {
                if (input[0] < -1.3028098) {
                    var116 = -0.036277063;
                } else {
                    if (input[4] < 0.6603672) {
                        var116 = -0.07570985;
                    } else {
                        var116 = 0.040693894;
                    }
                }
            }
        } else {
            if (input[2] < -1.5457709) {
                if (input[8] < -1.0107547) {
                    if (input[3] < 5.0177155) {
                        var116 = 0.00971888;
                    } else {
                        var116 = 0.03816759;
                    }
                } else {
                    if (input[4] < 3.7604346) {
                        var116 = -0.009129862;
                    } else {
                        var116 = 0.026168043;
                    }
                }
            } else {
                if (input[6] < 0.9201265) {
                    if (input[5] < 2.0169249) {
                        var116 = 0.0010393123;
                    } else {
                        var116 = 0.029188566;
                    }
                } else {
                    if (input[0] < 1.0966728) {
                        var116 = 0.025213378;
                    } else {
                        var116 = 0.041199703;
                    }
                }
            }
        }
    }
    double var117;
    if (input[2] < 0.02173918) {
        if (input[0] < -1.6166587) {
            if (input[5] < 0.43677843) {
                if (input[3] < 0.4066645) {
                    if (input[3] < -0.3114714) {
                        var117 = 0.06731055;
                    } else {
                        var117 = -0.022008857;
                    }
                } else {
                    if (input[6] < -1.5999739) {
                        var117 = -0.03426347;
                    } else {
                        var117 = 0.09356602;
                    }
                }
            } else {
                if (input[8] < -1.0130309) {
                    if (input[1] < 1.5623189) {
                        var117 = 0.0901273;
                    } else {
                        var117 = -0.019138284;
                    }
                } else {
                    if (input[5] < 0.778336) {
                        var117 = -0.029499408;
                    } else {
                        var117 = -0.03815089;
                    }
                }
            }
        } else {
            if (input[1] < 4.17245) {
                if (input[6] < 1.084771) {
                    if (input[5] < 0.07409769) {
                        var117 = 0.029497394;
                    } else {
                        var117 = 0.003271877;
                    }
                } else {
                    if (input[5] < 1.0950221) {
                        var117 = -0.011167198;
                    } else {
                        var117 = -0.03487512;
                    }
                }
            } else {
                if (input[5] < 5.630825) {
                    if (input[1] < 4.8541236) {
                        var117 = -0.0233667;
                    } else {
                        var117 = -0.038086887;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var117 = 0.062047213;
                    } else {
                        var117 = -0.040360942;
                    }
                }
            }
        }
    } else {
        if (input[5] < 0.549512) {
            if (input[2] < 0.11512014) {
                if (input[6] < 0.6551521) {
                    if (input[6] < 0.44596845) {
                        var117 = 0.040324043;
                    } else {
                        var117 = 0.02642173;
                    }
                } else {
                    if (input[5] < 0.007825906) {
                        var117 = 0.04405025;
                    } else {
                        var117 = -0.025790796;
                    }
                }
            } else {
                if (input[8] < -0.7460745) {
                    if (input[1] < -0.31262922) {
                        var117 = 0.011359587;
                    } else {
                        var117 = 0.03999137;
                    }
                } else {
                    if (input[5] < 0.095283754) {
                        var117 = 0.041550696;
                    } else {
                        var117 = 0.045338072;
                    }
                }
            }
        } else {
            if (input[6] < 1.1647528) {
                if (input[0] < -0.42782572) {
                    if (input[5] < 0.7480705) {
                        var117 = 0.054175787;
                    } else {
                        var117 = -0.025094008;
                    }
                } else {
                    if (input[0] < 2.2537944) {
                        var117 = 0.04991511;
                    } else {
                        var117 = -0.020362759;
                    }
                }
            } else {
                if (input[2] < 0.4512054) {
                    if (input[6] < 2.0959425) {
                        var117 = -0.029510733;
                    } else {
                        var117 = 0.074160926;
                    }
                } else {
                    if (input[1] < 1.097819) {
                        var117 = 0.05021526;
                    } else {
                        var117 = -0.03530135;
                    }
                }
            }
        }
    }
    double var118;
    if (input[0] < -0.58260196) {
        if (input[4] < 0.5475403) {
            if (input[6] < -0.32784718) {
                if (input[0] < -2.0029614) {
                    if (input[2] < -1.3701992) {
                        var118 = 0.037076168;
                    } else {
                        var118 = -0.08503571;
                    }
                } else {
                    if (input[2] < -0.76493245) {
                        var118 = -0.0644482;
                    } else {
                        var118 = -0.040940918;
                    }
                }
            } else {
                if (input[6] < 1.131379) {
                    if (input[0] < -1.7286664) {
                        var118 = 0.026536353;
                    } else {
                        var118 = -0.006792067;
                    }
                } else {
                    if (input[5] < -0.19945322) {
                        var118 = -0.049292047;
                    } else {
                        var118 = 0.03258607;
                    }
                }
            }
        } else {
            if (input[2] < -0.6793288) {
                if (input[8] < -1.0110432) {
                    if (input[4] < 1.0945724) {
                        var118 = -0.13019371;
                    } else {
                        var118 = -0.027401509;
                    }
                } else {
                    if (input[4] < 0.9593088) {
                        var118 = 0.023676816;
                    } else {
                        var118 = 0.036778376;
                    }
                }
            } else {
                if (input[6] < -0.5862255) {
                    if (input[0] < -1.2185669) {
                        var118 = 0.0017755011;
                    } else {
                        var118 = -0.07585006;
                    }
                } else {
                    if (input[5] < 0.64126486) {
                        var118 = -0.00021373361;
                    } else {
                        var118 = 0.028818786;
                    }
                }
            }
        }
    } else {
        if (input[0] < 1.9820464) {
            if (input[5] < 0.07409769) {
                if (input[5] < -0.10965646) {
                    var118 = -0.04078596;
                } else {
                    if (input[8] < -0.8381582) {
                        var118 = -0.039161704;
                    } else {
                        var118 = -0.004151939;
                    }
                }
            } else {
                if (input[6] < -0.2877311) {
                    if (input[7] < 1.9908953) {
                        var118 = -0.04942189;
                    } else {
                        var118 = -0.02602505;
                    }
                } else {
                    if (input[8] < -1.0113493) {
                        var118 = -0.037669398;
                    } else {
                        var118 = 0.0023082958;
                    }
                }
            }
        } else {
            if (input[8] < -0.999871) {
                if (input[5] < 1.895637) {
                    if (input[8] < -1.0038191) {
                        var118 = -0.044108972;
                    } else {
                        var118 = -0.062280063;
                    }
                } else {
                    if (input[8] < -1.0019864) {
                        var118 = -0.040988702;
                    } else {
                        var118 = -0.022412915;
                    }
                }
            } else {
                if (input[7] < 2.3388803) {
                    if (input[5] < 2.5102031) {
                        var118 = -0.05795459;
                    } else {
                        var118 = -0.020471191;
                    }
                } else {
                    if (input[0] < 3.1590319) {
                        var118 = 0.019415217;
                    } else {
                        var118 = -0.051276132;
                    }
                }
            }
        }
    }
    double var119;
    if (input[1] < 1.3463372) {
        if (input[0] < 0.39292353) {
            if (input[1] < 1.2797261) {
                var119 = -0.041079093;
            } else {
                if (input[3] < 1.578523) {
                    if (input[6] < 0.54741746) {
                        var119 = -0.037327692;
                    } else {
                        var119 = 0.015024316;
                    }
                } else {
                    var119 = -0.0423332;
                }
            }
        } else {
            var119 = -0.042143334;
        }
    } else {
        if (input[6] < -0.098714605) {
            if (input[5] < 1.8542025) {
                if (input[6] < -0.66334754) {
                    if (input[6] < -0.84659815) {
                        var119 = 0.043580722;
                    } else {
                        var119 = 0.026013302;
                    }
                } else {
                    if (input[1] < 2.0677018) {
                        var119 = -0.05281114;
                    } else {
                        var119 = 0.016884375;
                    }
                }
            } else {
                if (input[2] < -2.6188545) {
                    if (input[1] < 3.2730806) {
                        var119 = -0.0025704252;
                    } else {
                        var119 = 0.04175878;
                    }
                } else {
                    if (input[6] < -0.475695) {
                        var119 = 0.04180724;
                    } else {
                        var119 = 0.03889522;
                    }
                }
            }
        } else {
            if (input[6] < 1.0421718) {
                if (input[1] < 5.322413) {
                    if (input[5] < 1.3255055) {
                        var119 = 0.017909799;
                    } else {
                        var119 = 0.0012498895;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var119 = 0.026732752;
                    } else {
                        var119 = 0.04134754;
                    }
                }
            } else {
                if (input[6] < 1.131379) {
                    if (input[1] < 1.5113707) {
                        var119 = -0.037965953;
                    } else {
                        var119 = 0.032389726;
                    }
                } else {
                    if (input[0] < -2.4441388) {
                        var119 = -0.04914919;
                    } else {
                        var119 = 0.042000625;
                    }
                }
            }
        }
    }
    double var120;
    if (input[2] < 0.02173918) {
        if (input[4] < 3.0935438) {
            if (input[1] < -0.3516676) {
                if (input[2] < -0.8049654) {
                    if (input[4] < 0.57002664) {
                        var120 = -0.008610059;
                    } else {
                        var120 = -0.03468304;
                    }
                } else {
                    if (input[8] < -0.90404636) {
                        var120 = 0.043877795;
                    } else {
                        var120 = -0.0045029456;
                    }
                }
            } else {
                if (input[4] < 0.23243305) {
                    if (input[7] < 0.69342434) {
                        var120 = 0.039708674;
                    } else {
                        var120 = 0.0047995765;
                    }
                } else {
                    if (input[1] < 5.322413) {
                        var120 = 0.0015992781;
                    } else {
                        var120 = -0.035606895;
                    }
                }
            }
        } else {
            if (input[7] < 0.0084850555) {
                if (input[1] < -0.47458467) {
                    var120 = -0.0018134422;
                } else {
                    if (input[2] < -0.13803713) {
                        var120 = 0.21094912;
                    } else {
                        var120 = 0.10675059;
                    }
                }
            } else {
                if (input[5] < 4.366392) {
                    if (input[3] < 2.4720042) {
                        var120 = -0.033240456;
                    } else {
                        var120 = -0.02089757;
                    }
                } else {
                    if (input[1] < 6.2633357) {
                        var120 = 0.014627218;
                    } else {
                        var120 = -0.039217617;
                    }
                }
            }
        }
    } else {
        if (input[5] < 0.549512) {
            if (input[5] < -0.10965646) {
                var120 = 0.04140757;
            } else {
                if (input[2] < 0.11512014) {
                    if (input[8] < -0.849759) {
                        var120 = 0.040452994;
                    } else {
                        var120 = -0.0058424603;
                    }
                } else {
                    if (input[8] < -0.7460745) {
                        var120 = 0.029447993;
                    } else {
                        var120 = 0.04379663;
                    }
                }
            }
        } else {
            if (input[4] < 1.0945724) {
                if (input[3] < -0.25367263) {
                    if (input[2] < 0.3694625) {
                        var120 = -0.043014217;
                    } else {
                        var120 = 0.048768185;
                    }
                } else {
                    if (input[1] < 1.4189887) {
                        var120 = 0.03353113;
                    } else {
                        var120 = -0.028124051;
                    }
                }
            } else {
                if (input[1] < 0.8440511) {
                    if (input[4] < 1.5317609) {
                        var120 = 0.0219852;
                    } else {
                        var120 = 0.05177897;
                    }
                } else {
                    if (input[5] < 1.2520027) {
                        var120 = 0.07563859;
                    } else {
                        var120 = -0.032498527;
                    }
                }
            }
        }
    }
    double var121;
    if (input[1] < 1.3463372) {
        if (input[2] < 0.084040545) {
            if (input[0] < -0.42782572) {
                if (input[5] < 0.6703293) {
                    if (input[0] < -1.7286664) {
                        var121 = 0.031642877;
                    } else {
                        var121 = 0.0058993474;
                    }
                } else {
                    if (input[6] < -0.81092006) {
                        var121 = -0.009489415;
                    } else {
                        var121 = 0.036237776;
                    }
                }
            } else {
                if (input[1] < 0.30805492) {
                    if (input[5] < 0.79324865) {
                        var121 = -0.04664259;
                    } else {
                        var121 = 0.0018640775;
                    }
                } else {
                    if (input[6] < 0.27949953) {
                        var121 = -0.0067372588;
                    } else {
                        var121 = 0.0127835935;
                    }
                }
            }
        } else {
            if (input[5] < 0.43677843) {
                if (input[8] < -0.7460745) {
                    if (input[1] < -0.31262922) {
                        var121 = 0.02228214;
                    } else {
                        var121 = -0.04126009;
                    }
                } else {
                    if (input[5] < 0.052108772) {
                        var121 = -0.040723752;
                    } else {
                        var121 = -0.04361807;
                    }
                }
            } else {
                if (input[6] < 1.1647528) {
                    if (input[0] < -0.42782572) {
                        var121 = 0.003557591;
                    } else {
                        var121 = -0.042553566;
                    }
                } else {
                    if (input[2] < 0.49787998) {
                        var121 = 0.031135162;
                    } else {
                        var121 = -0.048463248;
                    }
                }
            }
        }
    } else {
        if (input[1] < 2.6432352) {
            var121 = -0.04169323;
        } else {
            var121 = -0.04093998;
        }
    }
    double var122;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            if (input[3] < 0.98658097) {
                var122 = -0.04098133;
            } else {
                var122 = -0.04230711;
            }
        } else {
            if (input[3] < 1.7358835) {
                if (input[5] < 0.7004639) {
                    if (input[4] < 1.1315169) {
                        var122 = -0.033005744;
                    } else {
                        var122 = 0.14497678;
                    }
                } else {
                    if (input[2] < -2.3761268) {
                        var122 = 0.00003943554;
                    } else {
                        var122 = -0.041769832;
                    }
                }
            } else {
                var122 = -0.043080073;
            }
        }
    } else {
        if (input[6] < -0.098714605) {
            if (input[4] < 2.0740442) {
                if (input[6] < -0.66334754) {
                    if (input[6] < -0.84659815) {
                        var122 = 0.042937502;
                    } else {
                        var122 = 0.031635094;
                    }
                } else {
                    if (input[2] < -1.9615964) {
                        var122 = -0.049103484;
                    } else {
                        var122 = 0.017621933;
                    }
                }
            } else {
                if (input[4] < 2.2272656) {
                    if (input[6] < -0.40349558) {
                        var122 = 0.042167585;
                    } else {
                        var122 = 0.013481304;
                    }
                } else {
                    var122 = 0.04161871;
                }
            }
        } else {
            if (input[6] < 1.0421718) {
                if (input[1] < 5.465226) {
                    if (input[2] < -1.355827) {
                        var122 = 0.0039357254;
                    } else {
                        var122 = 0.028811527;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var122 = 0.026641203;
                    } else {
                        var122 = 0.04115425;
                    }
                }
            } else {
                if (input[6] < 1.131379) {
                    if (input[4] < 0.9190091) {
                        var122 = -0.032066807;
                    } else {
                        var122 = 0.032601047;
                    }
                } else {
                    if (input[8] < -1.017144) {
                        var122 = 0.038259976;
                    } else {
                        var122 = 0.04213247;
                    }
                }
            }
        }
    }
    double var123;
    if (input[2] < 0.02173918) {
        if (input[0] < -1.6535618) {
            if (input[4] < 0.41091022) {
                if (input[8] < -0.9968573) {
                    if (input[5] < 0.18969864) {
                        var123 = 0.056889962;
                    } else {
                        var123 = 0.09359003;
                    }
                } else {
                    if (input[0] < -1.8519993) {
                        var123 = -0.018762039;
                    } else {
                        var123 = 0.019728713;
                    }
                }
            } else {
                if (input[4] < 0.9792598) {
                    if (input[8] < -1.0084236) {
                        var123 = 0.12811945;
                    } else {
                        var123 = -0.026646422;
                    }
                } else {
                    if (input[2] < -0.61060196) {
                        var123 = -0.0372686;
                    } else {
                        var123 = 0.08231537;
                    }
                }
            }
        } else {
            if (input[4] < 3.0935438) {
                if (input[1] < 4.8541236) {
                    if (input[0] < -0.33463055) {
                        var123 = -0.0069369506;
                    } else {
                        var123 = 0.0076222806;
                    }
                } else {
                    if (input[5] < 5.474809) {
                        var123 = -0.03669555;
                    } else {
                        var123 = 0.01482804;
                    }
                }
            } else {
                if (input[2] < -2.3433826) {
                    if (input[7] < 2.4166398) {
                        var123 = 0.041487504;
                    } else {
                        var123 = -0.016136426;
                    }
                } else {
                    if (input[7] < 0.02766323) {
                        var123 = 0.15407272;
                    } else {
                        var123 = -0.024159797;
                    }
                }
            }
        }
    } else {
        if (input[5] < 0.549512) {
            if (input[5] < -0.10965646) {
                var123 = 0.04129669;
            } else {
                if (input[0] < -1.0712166) {
                    if (input[5] < 0.11610248) {
                        var123 = 0.05101868;
                    } else {
                        var123 = -0.04076854;
                    }
                } else {
                    if (input[8] < -0.7460745) {
                        var123 = 0.026292445;
                    } else {
                        var123 = 0.04292785;
                    }
                }
            }
        } else {
            if (input[4] < 1.1132717) {
                if (input[0] < -0.2359252) {
                    if (input[7] < -0.2776804) {
                        var123 = 0.05609229;
                    } else {
                        var123 = -0.041333903;
                    }
                } else {
                    if (input[1] < 1.8927077) {
                        var123 = 0.02816198;
                    } else {
                        var123 = -0.036850765;
                    }
                }
            } else {
                if (input[1] < 0.8440511) {
                    if (input[4] < 1.5644528) {
                        var123 = 0.023509989;
                    } else {
                        var123 = 0.051393002;
                    }
                } else {
                    if (input[5] < 1.2520027) {
                        var123 = 0.07610643;
                    } else {
                        var123 = -0.031053614;
                    }
                }
            }
        }
    }
    double var124;
    if (input[1] < 1.3463372) {
        if (input[4] < -0.08310837) {
            if (input[0] < -0.939921) {
                if (input[6] < -0.10942445) {
                    if (input[5] < 0.007825906) {
                        var124 = -0.041707363;
                    } else {
                        var124 = -0.06403945;
                    }
                } else {
                    if (input[8] < -0.9297078) {
                        var124 = -0.061301753;
                    } else {
                        var124 = 0.025458846;
                    }
                }
            } else {
                if (input[7] < 0.9519198) {
                    if (input[0] < -0.8048311) {
                        var124 = -0.035306383;
                    } else {
                        var124 = -0.040683527;
                    }
                } else {
                    var124 = -0.054935753;
                }
            }
        } else {
            if (input[0] < -0.40506858) {
                if (input[4] < 0.88091904) {
                    if (input[6] < 0.7442115) {
                        var124 = -0.002110349;
                    } else {
                        var124 = 0.026480785;
                    }
                } else {
                    if (input[7] < -0.23059355) {
                        var124 = -0.01300015;
                    } else {
                        var124 = 0.03431195;
                    }
                }
            } else {
                if (input[7] < 1.5765852) {
                    if (input[6] < 1.2179093) {
                        var124 = -0.02264517;
                    } else {
                        var124 = 0.022266516;
                    }
                } else {
                    if (input[6] < 0.27949953) {
                        var124 = -0.0020571218;
                    } else {
                        var124 = 0.018292166;
                    }
                }
            }
        }
    } else {
        if (input[1] < 2.5950584) {
            var124 = -0.041623477;
        } else {
            var124 = -0.04089558;
        }
    }
    double var125;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            if (input[3] < 0.98658097) {
                var125 = -0.04092612;
            } else {
                var125 = -0.042198494;
            }
        } else {
            if (input[3] < 1.7358835) {
                if (input[5] < 0.6703293) {
                    if (input[4] < 1.1315169) {
                        var125 = -0.03677936;
                    } else {
                        var125 = 0.15635271;
                    }
                } else {
                    if (input[0] < 0.39292353) {
                        var125 = -0.012727073;
                    } else {
                        var125 = -0.04286555;
                    }
                }
            } else {
                var125 = -0.04292158;
            }
        }
    } else {
        if (input[6] < -0.098714605) {
            if (input[4] < 2.0963554) {
                if (input[6] < -0.66334754) {
                    if (input[6] < -0.9641092) {
                        var125 = 0.043099802;
                    } else {
                        var125 = 0.032314982;
                    }
                } else {
                    if (input[2] < -1.9700227) {
                        var125 = -0.049045384;
                    } else {
                        var125 = 0.017693201;
                    }
                }
            } else {
                if (input[2] < -2.75172) {
                    if (input[4] < 2.2272656) {
                        var125 = -0.100318305;
                    } else {
                        var125 = 0.035739657;
                    }
                } else {
                    if (input[4] < 2.2047238) {
                        var125 = 0.03429783;
                    } else {
                        var125 = 0.041389316;
                    }
                }
            }
        } else {
            if (input[2] < -1.5457709) {
                if (input[1] < 6.2633357) {
                    if (input[5] < 1.3255055) {
                        var125 = 0.016695354;
                    } else {
                        var125 = -0.0027745732;
                    }
                } else {
                    if (input[1] < 7.012119) {
                        var125 = 0.031026999;
                    } else {
                        var125 = 0.041431382;
                    }
                }
            } else {
                if (input[6] < 0.7522885) {
                    if (input[4] < 2.4887815) {
                        var125 = 0.0070421705;
                    } else {
                        var125 = 0.029672315;
                    }
                } else {
                    if (input[6] < 0.9092804) {
                        var125 = 0.03361273;
                    } else {
                        var125 = 0.04135377;
                    }
                }
            }
        }
    }
    double var126;
    if (input[2] < 0.084040545) {
        if (input[0] < -1.6535618) {
            if (input[4] < 0.41091022) {
                if (input[8] < -0.9968573) {
                    if (input[4] < -0.08310837) {
                        var126 = 0.033987854;
                    } else {
                        var126 = 0.085475855;
                    }
                } else {
                    if (input[0] < -2.1572433) {
                        var126 = -0.027772872;
                    } else {
                        var126 = 0.0035990414;
                    }
                }
            } else {
                if (input[4] < 0.9792598) {
                    if (input[8] < -1.0084236) {
                        var126 = 0.1160206;
                    } else {
                        var126 = -0.026242446;
                    }
                } else {
                    if (input[2] < -0.61060196) {
                        var126 = -0.036877733;
                    } else {
                        var126 = 0.08137867;
                    }
                }
            }
        } else {
            if (input[4] < 3.0935438) {
                if (input[6] < 0.48186854) {
                    if (input[8] < -1.0148631) {
                        var126 = -0.027477227;
                    } else {
                        var126 = 0.013813897;
                    }
                } else {
                    if (input[6] < 1.1995361) {
                        var126 = -0.0013110578;
                    } else {
                        var126 = -0.025690729;
                    }
                }
            } else {
                if (input[6] < 0.1490516) {
                    if (input[1] < 1.2797261) {
                        var126 = 0.009063303;
                    } else {
                        var126 = -0.03794507;
                    }
                } else {
                    if (input[6] < 0.76057523) {
                        var126 = -0.0024666504;
                    } else {
                        var126 = -0.027136888;
                    }
                }
            }
        }
    } else {
        if (input[7] < -0.21024725) {
            if (input[2] < 0.11512014) {
                if (input[6] < 1.2179093) {
                    if (input[7] < -0.2776804) {
                        var126 = 0.04266858;
                    } else {
                        var126 = 0.015122145;
                    }
                } else {
                    if (input[6] < 1.3094245) {
                        var126 = -0.22278453;
                    } else {
                        var126 = 0.039211124;
                    }
                }
            } else {
                if (input[4] < 0.9792598) {
                    if (input[4] < 0.938956) {
                        var126 = 0.04119209;
                    } else {
                        var126 = 0.014328318;
                    }
                } else {
                    if (input[6] < 1.2179093) {
                        var126 = 0.048945975;
                    } else {
                        var126 = 0.0700942;
                    }
                }
            }
        } else {
            if (input[6] < 1.3718796) {
                if (input[1] < -0.31262922) {
                    if (input[8] < -0.71863294) {
                        var126 = -0.025515549;
                    } else {
                        var126 = 0.036123984;
                    }
                } else {
                    if (input[7] < 2.128306) {
                        var126 = 0.03909003;
                    } else {
                        var126 = -0.03530049;
                    }
                }
            } else {
                if (input[2] < 0.49787998) {
                    if (input[1] < -0.3773692) {
                        var126 = 0.048975676;
                    } else {
                        var126 = -0.031223975;
                    }
                } else {
                    if (input[1] < 1.1223204) {
                        var126 = 0.04732798;
                    } else {
                        var126 = -0.030911218;
                    }
                }
            }
        }
    }
    double var127;
    if (input[1] < 1.2797261) {
        if (input[2] < 0.084040545) {
            if (input[4] < 1.2727728) {
                if (input[6] < 0.10903511) {
                    if (input[0] < -1.380883) {
                        var127 = 0.021513106;
                    } else {
                        var127 = -0.03391517;
                    }
                } else {
                    if (input[0] < -0.5154556) {
                        var127 = 0.02034839;
                    } else {
                        var127 = -0.0008372408;
                    }
                }
            } else {
                if (input[0] < 0.34000427) {
                    if (input[6] < -0.5624454) {
                        var127 = 0.0029775132;
                    } else {
                        var127 = 0.035123646;
                    }
                } else {
                    if (input[4] < 2.3749502) {
                        var127 = 0.001282725;
                    } else {
                        var127 = 0.02845182;
                    }
                }
            }
        } else {
            if (input[5] < 0.43677843) {
                if (input[8] < -0.7460745) {
                    if (input[1] < -0.31262922) {
                        var127 = 0.021860816;
                    } else {
                        var127 = -0.041101225;
                    }
                } else {
                    if (input[4] < 0.49741524) {
                        var127 = -0.040639434;
                    } else {
                        var127 = -0.043766163;
                    }
                }
            } else {
                if (input[4] < 1.1132717) {
                    if (input[6] < 1.1647528) {
                        var127 = -0.011976383;
                    } else {
                        var127 = 0.040290643;
                    }
                } else {
                    if (input[1] < 0.6126292) {
                        var127 = -0.039203107;
                    } else {
                        var127 = 0.019570634;
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[6] < 0.5222342) {
                if (input[8] < -1.0095893) {
                    if (input[0] < 0.68187267) {
                        var127 = -0.09067045;
                    } else {
                        var127 = 0.02347764;
                    }
                } else {
                    if (input[8] < -1.0025265) {
                        var127 = -0.06910261;
                    } else {
                        var127 = -0.025299788;
                    }
                }
            } else {
                if (input[5] < 1.4258819) {
                    if (input[0] < 1.9820464) {
                        var127 = 0.021131655;
                    } else {
                        var127 = -0.090619095;
                    }
                } else {
                    if (input[4] < 2.52999) {
                        var127 = -0.09787963;
                    } else {
                        var127 = -0.0023756428;
                    }
                }
            }
        } else {
            var127 = -0.041215528;
        }
    }
    double var128;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            if (input[1] < 0.6457461) {
                var128 = -0.040869933;
            } else {
                var128 = -0.04202497;
            }
        } else {
            if (input[6] < 0.98979276) {
                if (input[0] < -0.59951556) {
                    if (input[4] < 1.3985083) {
                        var128 = -0.03508302;
                    } else {
                        var128 = 0.046520337;
                    }
                } else {
                    if (input[8] < -1.0042704) {
                        var128 = -0.04272371;
                    } else {
                        var128 = -0.03353348;
                    }
                }
            } else {
                if (input[8] < -1.0019864) {
                    var128 = -0.040494513;
                } else {
                    if (input[6] < 1.1995361) {
                        var128 = 0.10845942;
                    } else {
                        var128 = -0.023244053;
                    }
                }
            }
        }
    } else {
        if (input[6] < -0.098714605) {
            if (input[4] < 1.9904836) {
                if (input[6] < -0.66334754) {
                    if (input[6] < -0.84659815) {
                        var128 = 0.042443812;
                    } else {
                        var128 = 0.027783968;
                    }
                } else {
                    if (input[2] < -1.9700227) {
                        var128 = -0.050271988;
                    } else {
                        var128 = 0.013778273;
                    }
                }
            } else {
                if (input[4] < 2.2272656) {
                    if (input[6] < -0.42002866) {
                        var128 = 0.04235683;
                    } else {
                        var128 = 0.012835704;
                    }
                } else {
                    if (input[6] < -0.10942445) {
                        var128 = 0.041292794;
                    } else {
                        var128 = 0.03630939;
                    }
                }
            }
        } else {
            if (input[6] < 1.0421718) {
                if (input[1] < 5.465226) {
                    if (input[4] < 1.4324757) {
                        var128 = 0.015720937;
                    } else {
                        var128 = -0.0006439634;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var128 = 0.02464465;
                    } else {
                        var128 = 0.040757455;
                    }
                }
            } else {
                if (input[6] < 1.131379) {
                    if (input[4] < 0.9190091) {
                        var128 = -0.03357078;
                    } else {
                        var128 = 0.03133218;
                    }
                } else {
                    if (input[0] < -2.4441388) {
                        var128 = -0.04683185;
                    } else {
                        var128 = 0.041180823;
                    }
                }
            }
        }
    }
    double var129;
    if (input[2] < 0.05297581) {
        if (input[0] < -1.6535618) {
            if (input[4] < 0.86144745) {
                if (input[3] < 0.35169166) {
                    if (input[7] < 0.32813305) {
                        var129 = -0.002752121;
                    } else {
                        var129 = -0.028611533;
                    }
                } else {
                    if (input[0] < -2.301425) {
                        var129 = 0.0026460194;
                    } else {
                        var129 = 0.09663992;
                    }
                }
            } else {
                if (input[7] < -0.3026839) {
                    if (input[1] < -0.4629015) {
                        var129 = 0.14061818;
                    } else {
                        var129 = -0.033846818;
                    }
                } else {
                    if (input[3] < -0.2872461) {
                        var129 = -0.004682883;
                    } else {
                        var129 = -0.036692217;
                    }
                }
            }
        } else {
            if (input[4] < 3.2707148) {
                if (input[6] < 1.1475737) {
                    if (input[7] < 0.85655856) {
                        var129 = 0.018348498;
                    } else {
                        var129 = 0.0028660814;
                    }
                } else {
                    if (input[1] < 1.3880605) {
                        var129 = -0.017900662;
                    } else {
                        var129 = -0.039743412;
                    }
                }
            } else {
                if (input[6] < 0.17229258) {
                    if (input[1] < 1.3463372) {
                        var129 = 0.017341804;
                    } else {
                        var129 = -0.037863754;
                    }
                } else {
                    if (input[3] < 2.580319) {
                        var129 = -0.029602965;
                    } else {
                        var129 = -0.00087670237;
                    }
                }
            }
        }
    } else {
        if (input[7] < -0.21024725) {
            if (input[2] < 0.11512014) {
                if (input[6] < 1.1156986) {
                    if (input[7] < -0.2776804) {
                        var129 = 0.043368418;
                    } else {
                        var129 = 0.008084312;
                    }
                } else {
                    if (input[0] < -0.462735) {
                        var129 = 0.040687773;
                    } else {
                        var129 = -0.17417844;
                    }
                }
            } else {
                if (input[4] < 0.9792598) {
                    if (input[4] < 0.938956) {
                        var129 = 0.041097436;
                    } else {
                        var129 = 0.009261703;
                    }
                } else {
                    if (input[6] < 1.2912512) {
                        var129 = 0.04822437;
                    } else {
                        var129 = 0.066266984;
                    }
                }
            }
        } else {
            if (input[6] < 1.3718796) {
                if (input[1] < -0.31262922) {
                    if (input[6] < -0.056063637) {
                        var129 = 0.042730585;
                    } else {
                        var129 = -0.0066359458;
                    }
                } else {
                    if (input[7] < 2.1721551) {
                        var129 = 0.038862806;
                    } else {
                        var129 = -0.035704322;
                    }
                }
            } else {
                if (input[2] < 0.49787998) {
                    if (input[1] < -0.36940223) {
                        var129 = 0.045270942;
                    } else {
                        var129 = -0.028383002;
                    }
                } else {
                    if (input[1] < 1.1223204) {
                        var129 = 0.046971906;
                    } else {
                        var129 = -0.030241434;
                    }
                }
            }
        }
    }
    double var130;
    if (input[1] < 1.2797261) {
        if (input[4] < 0.82070357) {
            if (input[3] < -0.43554708) {
                if (input[5] < 0.13914256) {
                    if (input[5] < -0.013142681) {
                        var130 = -0.04062098;
                    } else {
                        var130 = -0.045928665;
                    }
                } else {
                    if (input[0] < -1.0712166) {
                        var130 = 0.035243247;
                    } else {
                        var130 = -0.034933932;
                    }
                }
            } else {
                if (input[6] < 0.6291102) {
                    if (input[0] < -1.6535618) {
                        var130 = 0.027473215;
                    } else {
                        var130 = -0.016779209;
                    }
                } else {
                    if (input[0] < -0.27739027) {
                        var130 = 0.020537905;
                    } else {
                        var130 = -0.008172711;
                    }
                }
            }
        } else {
            if (input[0] < -0.40506858) {
                if (input[7] < -0.25291106) {
                    if (input[3] < -0.32676) {
                        var130 = -0.05533634;
                    } else {
                        var130 = 0.003341046;
                    }
                } else {
                    if (input[6] < -0.120302305) {
                        var130 = 0.013136205;
                    } else {
                        var130 = 0.035602137;
                    }
                }
            } else {
                if (input[6] < -0.32784718) {
                    if (input[7] < 2.006107) {
                        var130 = -0.061151356;
                    } else {
                        var130 = -0.017813671;
                    }
                } else {
                    if (input[4] < 2.3749502) {
                        var130 = 0.003958757;
                    } else {
                        var130 = 0.029676808;
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[6] < 0.5409869) {
                if (input[3] < 2.0789537) {
                    if (input[5] < 1.3101002) {
                        var130 = -0.073667295;
                    } else {
                        var130 = -0.028878802;
                    }
                } else {
                    if (input[0] < 1.3372785) {
                        var130 = 0.016328968;
                    } else {
                        var130 = -0.084997684;
                    }
                }
            } else {
                if (input[5] < 1.5193018) {
                    if (input[7] < 1.7957252) {
                        var130 = -0.030646702;
                    } else {
                        var130 = 0.028570188;
                    }
                } else {
                    if (input[4] < 2.7575443) {
                        var130 = -0.09691348;
                    } else {
                        var130 = -0.01009652;
                    }
                }
            }
        } else {
            var130 = -0.041160673;
        }
    }
    double var131;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            if (input[3] < 0.98658097) {
                var131 = -0.04082654;
            } else {
                var131 = -0.042002678;
            }
        } else {
            if (input[3] < 1.7358835) {
                if (input[5] < 0.6703293) {
                    if (input[4] < 1.1315169) {
                        var131 = -0.031278342;
                    } else {
                        var131 = 0.123569116;
                    }
                } else {
                    if (input[8] < -1.0087589) {
                        var131 = 0.049030427;
                    } else {
                        var131 = -0.036399364;
                    }
                }
            } else {
                var131 = -0.042672377;
            }
        }
    } else {
        if (input[6] < -0.06638456) {
            if (input[4] < 1.9904836) {
                if (input[6] < -0.66334754) {
                    if (input[6] < -0.9641092) {
                        var131 = 0.04272678;
                    } else {
                        var131 = 0.03205583;
                    }
                } else {
                    if (input[5] < 1.7278137) {
                        var131 = -0.044217113;
                    } else {
                        var131 = 0.0143748745;
                    }
                }
            } else {
                if (input[4] < 2.2272656) {
                    if (input[6] < -0.42002866) {
                        var131 = 0.042186923;
                    } else {
                        var131 = 0.014425066;
                    }
                } else {
                    if (input[6] < -0.10942445) {
                        var131 = 0.04122479;
                    } else {
                        var131 = 0.03783552;
                    }
                }
            }
        } else {
            if (input[6] < 1.0421718) {
                if (input[1] < 5.322413) {
                    if (input[5] < 1.3255055) {
                        var131 = 0.01602079;
                    } else {
                        var131 = -0.0016519191;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var131 = 0.023222491;
                    } else {
                        var131 = 0.04077251;
                    }
                }
            } else {
                if (input[6] < 1.131379) {
                    if (input[4] < 0.9190091) {
                        var131 = -0.031390622;
                    } else {
                        var131 = 0.030634854;
                    }
                } else {
                    if (input[1] < 1.3880605) {
                        var131 = 0.022798896;
                    } else {
                        var131 = 0.04102003;
                    }
                }
            }
        }
    }
    double var132;
    if (input[5] < 0.052108772) {
        if (input[2] < -0.40193808) {
            if (input[1] < -0.38781208) {
                if (input[6] < -0.10942445) {
                    if (input[8] < -0.97089326) {
                        var132 = -0.03025127;
                    } else {
                        var132 = 0.050047703;
                    }
                } else {
                    if (input[8] < -0.9297078) {
                        var132 = 0.028363435;
                    } else {
                        var132 = -0.033625122;
                    }
                }
            } else {
                if (input[4] < -0.08310837) {
                    if (input[2] < -1.6706516) {
                        var132 = 0.06492897;
                    } else {
                        var132 = 0.044962104;
                    }
                } else {
                    if (input[6] < 0.78619564) {
                        var132 = 0.026449177;
                    } else {
                        var132 = -0.012199765;
                    }
                }
            }
        } else {
            if (input[5] < -0.1815262) {
                if (input[5] < -0.19945322) {
                    if (input[2] < 0.02173918) {
                        var132 = 0.042947844;
                    } else {
                        var132 = 0.041014247;
                    }
                } else {
                    if (input[6] < 1.5302963) {
                        var132 = 0.041614234;
                    } else {
                        var132 = -0.035658758;
                    }
                }
            } else {
                if (input[6] < 1.2545375) {
                    if (input[8] < -0.8381582) {
                        var132 = 0.042242136;
                    } else {
                        var132 = 0.02589614;
                    }
                } else {
                    if (input[2] < 0.11512014) {
                        var132 = -0.033369917;
                    } else {
                        var132 = 0.041738953;
                    }
                }
            }
        }
    } else {
        if (input[6] < 1.084771) {
            if (input[4] < 3.3020856) {
                if (input[2] < -0.48212343) {
                    if (input[1] < -0.405889) {
                        var132 = -0.02778696;
                    } else {
                        var132 = 0.0029959306;
                    }
                } else {
                    if (input[6] < 0.026145756) {
                        var132 = 0.044378765;
                    } else {
                        var132 = 0.009726781;
                    }
                }
            } else {
                if (input[6] < 0.17229258) {
                    if (input[1] < 1.3463372) {
                        var132 = 0.01358488;
                    } else {
                        var132 = -0.03749499;
                    }
                } else {
                    if (input[3] < 2.5213652) {
                        var132 = -0.028504204;
                    } else {
                        var132 = 0.0029549135;
                    }
                }
            }
        } else {
            if (input[5] < 0.9652041) {
                if (input[3] < -0.38977444) {
                    if (input[5] < 0.68466944) {
                        var132 = 0.052225325;
                    } else {
                        var132 = -0.016369035;
                    }
                } else {
                    if (input[3] < 0.29127637) {
                        var132 = -0.016187087;
                    } else {
                        var132 = 0.026274921;
                    }
                }
            } else {
                if (input[2] < 0.3694625) {
                    if (input[1] < 1.4189887) {
                        var132 = -0.028650062;
                    } else {
                        var132 = -0.037853085;
                    }
                } else {
                    if (input[1] < 1.1223204) {
                        var132 = 0.06266907;
                    } else {
                        var132 = -0.037946492;
                    }
                }
            }
        }
    }
    double var133;
    if (input[0] < -0.5551308) {
        if (input[4] < 0.8432037) {
            if (input[6] < -0.32784718) {
                if (input[0] < -1.936442) {
                    if (input[8] < -0.94803625) {
                        var133 = 0.0370562;
                    } else {
                        var133 = -0.117452845;
                    }
                } else {
                    if (input[8] < -0.97002965) {
                        var133 = -0.06832639;
                    } else {
                        var133 = -0.042048182;
                    }
                }
            } else {
                if (input[6] < 0.7442115) {
                    if (input[0] < -0.939921) {
                        var133 = 0.011110104;
                    } else {
                        var133 = -0.028227756;
                    }
                } else {
                    if (input[3] < 0.6363197) {
                        var133 = 0.02248422;
                    } else {
                        var133 = -0.09927083;
                    }
                }
            }
        } else {
            if (input[2] < -0.37063894) {
                if (input[3] < 1.4470639) {
                    if (input[6] < -0.098714605) {
                        var133 = 0.020637797;
                    } else {
                        var133 = 0.035105597;
                    }
                } else {
                    if (input[4] < 1.7454575) {
                        var133 = -0.058009412;
                    } else {
                        var133 = -0.017585894;
                    }
                }
            } else {
                if (input[6] < -0.5624454) {
                    if (input[2] < -0.17182903) {
                        var133 = -0.10690071;
                    } else {
                        var133 = -0.054045625;
                    }
                } else {
                    if (input[7] < -0.1500774) {
                        var133 = -0.018079525;
                    } else {
                        var133 = 0.018753733;
                    }
                }
            }
        }
    } else {
        if (input[0] < 1.9820464) {
            if (input[7] < 1.3538029) {
                if (input[6] < 1.0287077) {
                    if (input[4] < 1.3520179) {
                        var133 = -0.03486106;
                    } else {
                        var133 = -0.010708594;
                    }
                } else {
                    if (input[4] < 0.35266468) {
                        var133 = -0.041702047;
                    } else {
                        var133 = 0.016659072;
                    }
                }
            } else {
                if (input[3] < 2.3382642) {
                    if (input[2] < -2.6795688) {
                        var133 = -0.038416453;
                    } else {
                        var133 = 0.007411896;
                    }
                } else {
                    if (input[3] < 2.3650753) {
                        var133 = -0.021236658;
                    } else {
                        var133 = -0.041651536;
                    }
                }
            }
        } else {
            if (input[3] < 1.6118222) {
                if (input[7] < 2.2335656) {
                    if (input[4] < 2.3262393) {
                        var133 = -0.0719035;
                    } else {
                        var133 = -0.0116873775;
                    }
                } else {
                    if (input[6] < 0.46973515) {
                        var133 = -0.007900721;
                    } else {
                        var133 = 0.0348832;
                    }
                }
            } else {
                if (input[4] < 2.4887815) {
                    if (input[3] < 2.0332208) {
                        var133 = -0.063205004;
                    } else {
                        var133 = -0.04253877;
                    }
                } else {
                    if (input[3] < 1.9179288) {
                        var133 = -0.019767042;
                    } else {
                        var133 = -0.040819116;
                    }
                }
            }
        }
    }
    double var134;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            if (input[3] < 0.98658097) {
                var134 = -0.04078095;
            } else {
                var134 = -0.04191404;
            }
        } else {
            if (input[3] < 1.7358835) {
                if (input[5] < 0.7004639) {
                    if (input[4] < 1.1315169) {
                        var134 = -0.037801493;
                    } else {
                        var134 = 0.09967798;
                    }
                } else {
                    if (input[2] < -2.3761268) {
                        var134 = 0.0028165206;
                    } else {
                        var134 = -0.04241648;
                    }
                }
            } else {
                var134 = -0.042625584;
            }
        }
    } else {
        if (input[6] < -0.34210262) {
            if (input[6] < -0.5862255) {
                if (input[4] < 1.0383068) {
                    if (input[6] < -0.9641092) {
                        var134 = 0.042377748;
                    } else {
                        var134 = -0.07144749;
                    }
                } else {
                    if (input[5] < 5.826247) {
                        var134 = 0.041533694;
                    } else {
                        var134 = 0.03582257;
                    }
                }
            } else {
                if (input[4] < 2.0124002) {
                    if (input[2] < -1.9074583) {
                        var134 = -0.055116385;
                    } else {
                        var134 = 0.015036529;
                    }
                } else {
                    if (input[4] < 2.2518477) {
                        var134 = 0.02628784;
                    } else {
                        var134 = 0.04153031;
                    }
                }
            }
        } else {
            if (input[2] < -1.5347192) {
                if (input[1] < 6.2633357) {
                    if (input[5] < 1.3567985) {
                        var134 = 0.013800088;
                    } else {
                        var134 = -0.0029667967;
                    }
                } else {
                    if (input[1] < 7.012119) {
                        var134 = 0.030414097;
                    } else {
                        var134 = 0.041189145;
                    }
                }
            } else {
                if (input[6] < 0.7522885) {
                    if (input[4] < 2.4887815) {
                        var134 = 0.0075196656;
                    } else {
                        var134 = 0.03000557;
                    }
                } else {
                    if (input[2] < -1.2926188) {
                        var134 = 0.033758305;
                    } else {
                        var134 = 0.041021254;
                    }
                }
            }
        }
    }
    double var135;
    if (input[2] < 0.084040545) {
        if (input[0] < -1.7286664) {
            if (input[4] < 0.82070357) {
                if (input[3] < 0.388583) {
                    if (input[4] < -0.10842057) {
                        var135 = 0.03746068;
                    } else {
                        var135 = -0.022334559;
                    }
                } else {
                    if (input[0] < -2.4441388) {
                        var135 = 0.012203534;
                    } else {
                        var135 = 0.08971239;
                    }
                }
            } else {
                if (input[5] < 0.7480705) {
                    if (input[3] < 0.35169166) {
                        var135 = -0.030777289;
                    } else {
                        var135 = 0.031630103;
                    }
                } else {
                    if (input[3] < 1.791475) {
                        var135 = -0.037786014;
                    } else {
                        var135 = 0.017582374;
                    }
                }
            }
        } else {
            if (input[1] < 4.8541236) {
                if (input[6] < 0.54741746) {
                    if (input[4] < 0.59291244) {
                        var135 = 0.02527561;
                    } else {
                        var135 = 0.0054143486;
                    }
                } else {
                    if (input[2] < -2.5455425) {
                        var135 = 0.032731026;
                    } else {
                        var135 = -0.007735133;
                    }
                }
            } else {
                if (input[5] < 5.630825) {
                    if (input[1] < 5.465226) {
                        var135 = -0.030585272;
                    } else {
                        var135 = -0.038911678;
                    }
                } else {
                    if (input[0] < 3.2120533) {
                        var135 = 0.1480548;
                    } else {
                        var135 = -0.027764501;
                    }
                }
            }
        }
    } else {
        if (input[5] < 0.43677843) {
            if (input[3] < -0.3735895) {
                if (input[4] < 0.57002664) {
                    if (input[5] < 0.41578928) {
                        var135 = 0.040961187;
                    } else {
                        var135 = -0.021122916;
                    }
                } else {
                    if (input[0] < -0.73973346) {
                        var135 = 0.05212811;
                    } else {
                        var135 = 0.04299931;
                    }
                }
            } else {
                if (input[1] < -0.31262922) {
                    if (input[5] < -0.10965646) {
                        var135 = 0.040751662;
                    } else {
                        var135 = -0.06762268;
                    }
                } else {
                    if (input[1] < 1.4189887) {
                        var135 = 0.04143777;
                    } else {
                        var135 = -0.007866422;
                    }
                }
            }
        } else {
            if (input[6] < 1.3718796) {
                if (input[0] < -0.40506858) {
                    if (input[4] < 1.3048166) {
                        var135 = -0.022978975;
                    } else {
                        var135 = 0.059777673;
                    }
                } else {
                    if (input[0] < 2.3913321) {
                        var135 = 0.043213587;
                    } else {
                        var135 = -0.019334363;
                    }
                }
            } else {
                if (input[6] < 2.0959425) {
                    if (input[4] < 0.9993815) {
                        var135 = -0.04613157;
                    } else {
                        var135 = 0.00020372991;
                    }
                } else {
                    if (input[1] < 0.51745456) {
                        var135 = 0.06360265;
                    } else {
                        var135 = -0.031654395;
                    }
                }
            }
        }
    }
    double var136;
    if (input[0] < -0.4741394) {
        if (input[3] < -0.35677335) {
            if (input[5] < 0.82415235) {
                if (input[0] < -0.96548903) {
                    if (input[5] < -0.16327175) {
                        var136 = -0.04185064;
                    } else {
                        var136 = 0.0033538397;
                    }
                } else {
                    if (input[4] < 0.49741524) {
                        var136 = -0.03978728;
                    } else {
                        var136 = -0.057401624;
                    }
                }
            } else {
                if (input[4] < 1.7649002) {
                    if (input[7] < -0.2776804) {
                        var136 = -0.06847064;
                    } else {
                        var136 = 0.044900693;
                    }
                } else {
                    if (input[2] < -0.13803713) {
                        var136 = -0.21060382;
                    } else {
                        var136 = -0.065384194;
                    }
                }
            }
        } else {
            if (input[4] < 0.8989866) {
                if (input[0] < -2.0344553) {
                    if (input[8] < -1.0074364) {
                        var136 = -0.087583914;
                    } else {
                        var136 = 0.032374233;
                    }
                } else {
                    if (input[2] < -1.5667169) {
                        var136 = -0.029498186;
                    } else {
                        var136 = 0.010066468;
                    }
                }
            } else {
                if (input[3] < 1.4811105) {
                    if (input[2] < -0.76493245) {
                        var136 = 0.034361947;
                    } else {
                        var136 = 0.014472494;
                    }
                } else {
                    if (input[4] < 1.7079022) {
                        var136 = -0.05865056;
                    } else {
                        var136 = -0.02107661;
                    }
                }
            }
        }
    } else {
        if (input[0] < 1.9820464) {
            if (input[7] < 1.3538029) {
                if (input[4] < 1.3366867) {
                    if (input[4] < 0.26215616) {
                        var136 = -0.039090436;
                    } else {
                        var136 = -0.026951384;
                    }
                } else {
                    if (input[0] < 0.5298322) {
                        var136 = 0.010685742;
                    } else {
                        var136 = -0.02914081;
                    }
                }
            } else {
                if (input[3] < 2.3382642) {
                    if (input[5] < 0.59864205) {
                        var136 = 0.02097515;
                    } else {
                        var136 = 0.00058831;
                    }
                } else {
                    if (input[3] < 2.3650753) {
                        var136 = -0.02075861;
                    } else {
                        var136 = -0.041579835;
                    }
                }
            }
        } else {
            if (input[3] < 1.6118222) {
                if (input[7] < 2.2335656) {
                    if (input[5] < 2.5102031) {
                        var136 = -0.066131346;
                    } else {
                        var136 = 0.0017173856;
                    }
                } else {
                    if (input[4] < 1.2400445) {
                        var136 = -0.05208151;
                    } else {
                        var136 = 0.021987211;
                    }
                }
            } else {
                if (input[5] < 1.9169048) {
                    if (input[3] < 2.0332208) {
                        var136 = -0.0633925;
                    } else {
                        var136 = -0.04326221;
                    }
                } else {
                    if (input[3] < 1.9179288) {
                        var136 = -0.019916443;
                    } else {
                        var136 = -0.04091067;
                    }
                }
            }
        }
    }
    double var137;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            if (input[3] < 0.98658097) {
                var137 = -0.040739812;
            } else {
                var137 = -0.041837845;
            }
        } else {
            if (input[3] < 1.7358835) {
                if (input[5] < 0.7004639) {
                    if (input[4] < 1.1315169) {
                        var137 = -0.031701975;
                    } else {
                        var137 = 0.0901521;
                    }
                } else {
                    if (input[0] < 0.39292353) {
                        var137 = -0.013788875;
                    } else {
                        var137 = -0.042988677;
                    }
                }
            } else {
                var137 = -0.04249985;
            }
        }
    } else {
        if (input[2] < -1.5667169) {
            if (input[1] < 4.8541236) {
                if (input[5] < 1.3255055) {
                    if (input[7] < 2.2845242) {
                        var137 = 0.022205625;
                    } else {
                        var137 = -0.0011008437;
                    }
                } else {
                    if (input[4] < 3.9138174) {
                        var137 = -0.0051207338;
                    } else {
                        var137 = 0.024329977;
                    }
                }
            } else {
                if (input[5] < 5.826247) {
                    if (input[1] < 5.465226) {
                        var137 = 0.031216988;
                    } else {
                        var137 = 0.039717343;
                    }
                } else {
                    if (input[0] < 3.2120533) {
                        var137 = -0.109230734;
                    } else {
                        var137 = 0.03133672;
                    }
                }
            }
        } else {
            if (input[2] < -1.167169) {
                if (input[5] < 2.4794507) {
                    if (input[0] < 2.6240582) {
                        var137 = 0.023841742;
                    } else {
                        var137 = -0.008193049;
                    }
                } else {
                    if (input[1] < 4.3832526) {
                        var137 = 0.027733365;
                    } else {
                        var137 = 0.0382952;
                    }
                }
            } else {
                if (input[5] < 1.766917) {
                    if (input[0] < 5.813713) {
                        var137 = 0.030914828;
                    } else {
                        var137 = -0.17529006;
                    }
                } else {
                    if (input[0] < 3.776753) {
                        var137 = 0.04012323;
                    } else {
                        var137 = 0.0347367;
                    }
                }
            }
        }
    }
    double var138;
    if (input[2] < 0.084040545) {
        if (input[0] < -1.7286664) {
            if (input[4] < 0.86144745) {
                if (input[8] < -1.0008278) {
                    if (input[6] < -1.3013216) {
                        var138 = -0.03888796;
                    } else {
                        var138 = 0.08807088;
                    }
                } else {
                    if (input[0] < -2.1572433) {
                        var138 = -0.028723847;
                    } else {
                        var138 = -0.0040255976;
                    }
                }
            } else {
                if (input[7] < -0.25291106) {
                    if (input[6] < 0.27260417) {
                        var138 = -0.03570933;
                    } else {
                        var138 = 0.09043837;
                    }
                } else {
                    if (input[2] < -1.3056504) {
                        var138 = -0.03721001;
                    } else {
                        var138 = -0.02825847;
                    }
                }
            }
        } else {
            if (input[6] < 1.084771) {
                if (input[4] < 3.3020856) {
                    if (input[4] < 0.26215616) {
                        var138 = 0.025709007;
                    } else {
                        var138 = 0.004097927;
                    }
                } else {
                    if (input[6] < 0.17229258) {
                        var138 = -0.03431622;
                    } else {
                        var138 = -0.007128524;
                    }
                }
            } else {
                if (input[5] < 1.0550139) {
                    if (input[2] < -1.7569215) {
                        var138 = 0.08653012;
                    } else {
                        var138 = -0.00878873;
                    }
                } else {
                    if (input[0] < 3.0979455) {
                        var138 = -0.030037876;
                    } else {
                        var138 = -0.04042472;
                    }
                }
            }
        }
    } else {
        if (input[5] < 0.43677843) {
            if (input[8] < -0.7460745) {
                if (input[8] < -0.8381582) {
                    if (input[6] < 2.4375153) {
                        var138 = 0.041452926;
                    } else {
                        var138 = -0.009761446;
                    }
                } else {
                    if (input[4] < -0.011599243) {
                        var138 = 0.04091115;
                    } else {
                        var138 = 0.0006424375;
                    }
                }
            } else {
                if (input[5] < 0.07409769) {
                    var138 = 0.040883787;
                } else {
                    if (input[0] < -0.8048311) {
                        var138 = 0.051477067;
                    } else {
                        var138 = 0.0424692;
                    }
                }
            }
        } else {
            if (input[4] < 1.0559446) {
                if (input[6] < 1.1647528) {
                    if (input[0] < -0.29921454) {
                        var138 = -0.019107029;
                    } else {
                        var138 = 0.04535018;
                    }
                } else {
                    if (input[2] < 0.49787998) {
                        var138 = -0.039869722;
                    } else {
                        var138 = 0.046431236;
                    }
                }
            } else {
                if (input[0] < 2.3019106) {
                    if (input[6] < 1.6263527) {
                        var138 = 0.044172354;
                    } else {
                        var138 = 0.012724046;
                    }
                } else {
                    if (input[5] < 1.1822844) {
                        var138 = 0.05893025;
                    } else {
                        var138 = -0.0340077;
                    }
                }
            }
        }
    }
    double var139;
    if (input[0] < -0.4741394) {
        if (input[3] < -0.35677335) {
            if (input[6] < 0.10035754) {
                if (input[2] < -0.30732393) {
                    if (input[5] < 0.3466449) {
                        var139 = -0.05457383;
                    } else {
                        var139 = -0.15252866;
                    }
                } else {
                    if (input[7] < 0.30883363) {
                        var139 = -0.0411478;
                    } else {
                        var139 = -0.062578164;
                    }
                }
            } else {
                if (input[2] < 0.23611674) {
                    if (input[5] < 0.82415235) {
                        var139 = -0.002601062;
                    } else {
                        var139 = 0.03772407;
                    }
                } else {
                    if (input[5] < 0.91209006) {
                        var139 = -0.042798832;
                    } else {
                        var139 = -0.013942442;
                    }
                }
            }
        } else {
            if (input[5] < 0.79324865) {
                if (input[0] < -1.8243362) {
                    if (input[3] < 0.51010114) {
                        var139 = 0.03100536;
                    } else {
                        var139 = -0.051228046;
                    }
                } else {
                    if (input[2] < -1.6401584) {
                        var139 = -0.032063328;
                    } else {
                        var139 = 0.010580707;
                    }
                }
            } else {
                if (input[6] < -0.7188839) {
                    if (input[0] < -1.791021) {
                        var139 = 0.039086364;
                    } else {
                        var139 = -0.12222675;
                    }
                } else {
                    if (input[3] < 1.4470639) {
                        var139 = 0.033642653;
                    } else {
                        var139 = -0.023820845;
                    }
                }
            }
        }
    } else {
        if (input[0] < 1.9820464) {
            if (input[7] < 1.3538029) {
                if (input[6] < 1.0287077) {
                    if (input[8] < -0.9902522) {
                        var139 = -0.014371455;
                    } else {
                        var139 = -0.036931716;
                    }
                } else {
                    if (input[2] < 0.49787998) {
                        var139 = 0.013850295;
                    } else {
                        var139 = -0.041598085;
                    }
                }
            } else {
                if (input[3] < 2.3382642) {
                    if (input[2] < -2.6795688) {
                        var139 = -0.037710935;
                    } else {
                        var139 = 0.0064559844;
                    }
                } else {
                    if (input[3] < 2.3650753) {
                        var139 = -0.02027406;
                    } else {
                        var139 = -0.041543655;
                    }
                }
            }
        } else {
            if (input[3] < 1.6456834) {
                if (input[7] < 2.2676282) {
                    if (input[6] < 0.47581515) {
                        var139 = -0.015348707;
                    } else {
                        var139 = -0.0656013;
                    }
                } else {
                    if (input[6] < 0.46973515) {
                        var139 = -0.013713519;
                    } else {
                        var139 = 0.03406128;
                    }
                }
            } else {
                if (input[5] < 1.9169048) {
                    if (input[3] < 2.0332208) {
                        var139 = -0.064983025;
                    } else {
                        var139 = -0.043295357;
                    }
                } else {
                    if (input[3] < 1.9179288) {
                        var139 = -0.0210389;
                    } else {
                        var139 = -0.040873013;
                    }
                }
            }
        }
    }
    double var140;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            if (input[3] < 0.98658097) {
                var140 = -0.040703047;
            } else {
                var140 = -0.041763447;
            }
        } else {
            if (input[3] < 1.7358835) {
                if (input[5] < 0.7004639) {
                    if (input[4] < 1.1315169) {
                        var140 = -0.036082644;
                    } else {
                        var140 = 0.079590775;
                    }
                } else {
                    if (input[2] < -2.3761268) {
                        var140 = -0.0039033028;
                    } else {
                        var140 = -0.04082162;
                    }
                }
            } else {
                var140 = -0.042406358;
            }
        }
    } else {
        if (input[2] < -1.5667169) {
            if (input[1] < 5.465226) {
                if (input[4] < 4.2427344) {
                    if (input[5] < 4.646677) {
                        var140 = 0.004287111;
                    } else {
                        var140 = -0.060304787;
                    }
                } else {
                    if (input[7] < 2.1434345) {
                        var140 = 0.01328308;
                    } else {
                        var140 = 0.034034543;
                    }
                }
            } else {
                if (input[5] < 6.07121) {
                    if (input[1] < 6.5274234) {
                        var140 = 0.03705045;
                    } else {
                        var140 = 0.04082576;
                    }
                } else {
                    if (input[1] < 7.012119) {
                        var140 = -0.09460715;
                    } else {
                        var140 = 0.041043725;
                    }
                }
            }
        } else {
            if (input[2] < -1.167169) {
                if (input[5] < 2.4794507) {
                    if (input[8] < -1.0094297) {
                        var140 = 0.032288622;
                    } else {
                        var140 = 0.0075390795;
                    }
                } else {
                    if (input[1] < 4.3832526) {
                        var140 = 0.027440934;
                    } else {
                        var140 = 0.03831412;
                    }
                }
            } else {
                if (input[5] < 1.766917) {
                    if (input[7] < 2.788051) {
                        var140 = 0.030832727;
                    } else {
                        var140 = -0.04303869;
                    }
                } else {
                    if (input[7] < 1.7396411) {
                        var140 = 0.039669935;
                    } else {
                        var140 = 0.03542914;
                    }
                }
            }
        }
    }
    double var141;
    if (input[5] < 0.052108772) {
        if (input[2] < -0.40193808) {
            if (input[3] < -0.12219063) {
                if (input[6] < -0.10942445) {
                    if (input[2] < -1.053377) {
                        var141 = 0.08873637;
                    } else {
                        var141 = 0.04253999;
                    }
                } else {
                    if (input[4] < -0.4025746) {
                        var141 = -0.05800106;
                    } else {
                        var141 = -0.013596544;
                    }
                }
            } else {
                if (input[7] < 0.51622593) {
                    if (input[4] < 0.35266468) {
                        var141 = 0.04572112;
                    } else {
                        var141 = -0.009910163;
                    }
                } else {
                    if (input[3] < 0.4664295) {
                        var141 = -0.0109865;
                    } else {
                        var141 = 0.047857184;
                    }
                }
            }
        } else {
            if (input[5] < -0.1815262) {
                if (input[7] < -0.23059355) {
                    if (input[2] < -0.010053885) {
                        var141 = 0.045764912;
                    } else {
                        var141 = 0.0408159;
                    }
                } else {
                    if (input[6] < 1.5302963) {
                        var141 = 0.039214544;
                    } else {
                        var141 = -0.020710098;
                    }
                }
            } else {
                if (input[6] < 1.2545375) {
                    if (input[8] < -0.8381582) {
                        var141 = 0.042021293;
                    } else {
                        var141 = 0.023643216;
                    }
                } else {
                    if (input[6] < 1.802359) {
                        var141 = -0.030753573;
                    } else {
                        var141 = 0.05917737;
                    }
                }
            }
        }
    } else {
        if (input[6] < 1.1006693) {
            if (input[4] < 3.3333826) {
                if (input[5] < 5.474809) {
                    if (input[6] < 0.45788866) {
                        var141 = 0.0077755465;
                    } else {
                        var141 = -0.0024675624;
                    }
                } else {
                    if (input[7] < 2.3197224) {
                        var141 = 0.22881812;
                    } else {
                        var141 = 0.009858387;
                    }
                }
            } else {
                if (input[6] < 0.17229258) {
                    if (input[8] < -0.9925188) {
                        var141 = -0.0363567;
                    } else {
                        var141 = 0.040386744;
                    }
                } else {
                    if (input[3] < 2.647136) {
                        var141 = -0.026348671;
                    } else {
                        var141 = 0.006042172;
                    }
                }
            }
        } else {
            if (input[5] < 0.82415235) {
                if (input[3] < 0.29127637) {
                    if (input[3] < -0.4056434) {
                        var141 = 0.04815899;
                    } else {
                        var141 = -0.013462668;
                    }
                } else {
                    if (input[2] < -1.6401584) {
                        var141 = 0.128593;
                    } else {
                        var141 = 0.0072890013;
                    }
                }
            } else {
                if (input[2] < 0.41529825) {
                    if (input[5] < 1.4258819) {
                        var141 = -0.023062564;
                    } else {
                        var141 = -0.033619698;
                    }
                } else {
                    if (input[3] < 0.9250243) {
                        var141 = 0.05586934;
                    } else {
                        var141 = -0.03511638;
                    }
                }
            }
        }
    }
    double var142;
    if (input[1] < 1.2797261) {
        if (input[2] < 0.11512014) {
            if (input[4] < 1.2727728) {
                if (input[6] < 0.054918017) {
                    if (input[0] < -1.2185669) {
                        var142 = 0.012804615;
                    } else {
                        var142 = -0.03773433;
                    }
                } else {
                    if (input[8] < -1.0066262) {
                        var142 = 0.027180921;
                    } else {
                        var142 = 0.002825291;
                    }
                }
            } else {
                if (input[0] < 0.28843397) {
                    if (input[2] < -0.40193808) {
                        var142 = 0.033369403;
                    } else {
                        var142 = 0.0019837967;
                    }
                } else {
                    if (input[7] < 2.1871905) {
                        var142 = -0.005423685;
                    } else {
                        var142 = 0.02050769;
                    }
                }
            }
        } else {
            if (input[7] < -0.21024725) {
                if (input[4] < 0.9993815) {
                    if (input[4] < 0.938956) {
                        var142 = -0.040230956;
                    } else {
                        var142 = -0.0060657295;
                    }
                } else {
                    if (input[6] < 1.2912512) {
                        var142 = -0.046199184;
                    } else {
                        var142 = -0.0628017;
                    }
                }
            } else {
                if (input[7] < 0.06909275) {
                    if (input[2] < 0.39350474) {
                        var142 = 0.023968412;
                    } else {
                        var142 = -0.039616294;
                    }
                } else {
                    if (input[1] < 0.06642875) {
                        var142 = -0.042170275;
                    } else {
                        var142 = -0.0046929927;
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.3463372) {
            if (input[2] < -2.5455425) {
                if (input[0] < 2.5750299) {
                    if (input[6] < -0.02460529) {
                        var142 = -0.06346618;
                    } else {
                        var142 = -0.09353178;
                    }
                } else {
                    var142 = 0.041328035;
                }
            } else {
                if (input[8] < -1.0092635) {
                    if (input[0] < 0.34000427) {
                        var142 = -0.09524037;
                    } else {
                        var142 = 0.037809923;
                    }
                } else {
                    if (input[6] < 0.31282315) {
                        var142 = -0.06595819;
                    } else {
                        var142 = -0.011929867;
                    }
                }
            }
        } else {
            var142 = -0.04104399;
        }
    }
    double var143;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            if (input[1] < 0.5491716) {
                var143 = -0.040644888;
            } else {
                var143 = -0.041594565;
            }
        } else {
            if (input[0] < 0.31391355) {
                if (input[8] < -1.0027871) {
                    if (input[5] < 2.148901) {
                        var143 = -0.03970976;
                    } else {
                        var143 = 0.036465753;
                    }
                } else {
                    if (input[7] < 2.4166398) {
                        var143 = 0.063566945;
                    } else {
                        var143 = -0.035266694;
                    }
                }
            } else {
                if (input[5] < 0.68466944) {
                    if (input[4] < 1.1679293) {
                        var143 = -0.038881395;
                    } else {
                        var143 = 0.0778964;
                    }
                } else {
                    var143 = -0.04244007;
                }
            }
        }
    } else {
        if (input[2] < -1.5871143) {
            if (input[1] < 5.322413) {
                if (input[4] < 4.2427344) {
                    if (input[5] < 3.65323) {
                        var143 = 0.005017948;
                    } else {
                        var143 = -0.031624418;
                    }
                } else {
                    if (input[7] < 2.0373845) {
                        var143 = 0.011308007;
                    } else {
                        var143 = 0.03225971;
                    }
                }
            } else {
                if (input[5] < 6.07121) {
                    if (input[1] < 6.5274234) {
                        var143 = 0.03523144;
                    } else {
                        var143 = 0.040487338;
                    }
                } else {
                    if (input[1] < 7.012119) {
                        var143 = -0.07505172;
                    } else {
                        var143 = 0.040753677;
                    }
                }
            }
        } else {
            if (input[2] < -1.167169) {
                if (input[5] < 2.4794507) {
                    if (input[0] < 2.3913321) {
                        var143 = 0.02341781;
                    } else {
                        var143 = -0.006331795;
                    }
                } else {
                    if (input[1] < 4.3832526) {
                        var143 = 0.02615716;
                    } else {
                        var143 = 0.038096074;
                    }
                }
            } else {
                if (input[5] < 1.766917) {
                    if (input[0] < 5.813713) {
                        var143 = 0.030478597;
                    } else {
                        var143 = -0.15892592;
                    }
                } else {
                    if (input[0] < 4.0128775) {
                        var143 = 0.03934328;
                    } else {
                        var143 = 0.033369567;
                    }
                }
            }
        }
    }
    double var144;
    if (input[2] < 0.11512014) {
        if (input[6] < 1.084771) {
            if (input[4] < 3.3020856) {
                if (input[4] < 0.26215616) {
                    if (input[7] < 0.6731418) {
                        var144 = 0.028752755;
                    } else {
                        var144 = 0.0041777;
                    }
                } else {
                    if (input[5] < 3.65323) {
                        var144 = 0.0015390682;
                    } else {
                        var144 = 0.035046663;
                    }
                }
            } else {
                if (input[6] < 0.17229258) {
                    if (input[8] < -0.9935752) {
                        var144 = -0.035341214;
                    } else {
                        var144 = 0.034604874;
                    }
                } else {
                    if (input[3] < 2.5213652) {
                        var144 = -0.028311485;
                    } else {
                        var144 = 0.00651831;
                    }
                }
            }
        } else {
            if (input[5] < 1.0550139) {
                if (input[3] < 0.25192553) {
                    if (input[6] < 1.7518744) {
                        var144 = -0.019927671;
                    } else {
                        var144 = 0.017009202;
                    }
                } else {
                    if (input[2] < -1.9347459) {
                        var144 = 0.11766129;
                    } else {
                        var144 = 0.008675473;
                    }
                }
            } else {
                if (input[3] < 2.0332208) {
                    if (input[5] < 5.826247) {
                        var144 = -0.029155165;
                    } else {
                        var144 = 0.241638;
                    }
                } else {
                    if (input[6] < 1.1475737) {
                        var144 = -0.025855465;
                    } else {
                        var144 = -0.039473325;
                    }
                }
            }
        }
    } else {
        if (input[7] < -0.19052146) {
            if (input[4] < 0.9792598) {
                if (input[5] < 0.9652041) {
                    if (input[3] < -0.35677335) {
                        var144 = 0.04084505;
                    } else {
                        var144 = 0.037047874;
                    }
                } else {
                    if (input[4] < 0.9190091) {
                        var144 = 0.037028797;
                    } else {
                        var144 = -0.04486013;
                    }
                }
            } else {
                if (input[6] < 1.2179093) {
                    var144 = 0.046609163;
                } else {
                    if (input[2] < 0.41529825) {
                        var144 = 0.071772076;
                    } else {
                        var144 = 0.040730204;
                    }
                }
            }
        } else {
            if (input[6] < 1.3718796) {
                if (input[8] < -0.8093834) {
                    if (input[7] < 2.128306) {
                        var144 = 0.03882324;
                    } else {
                        var144 = -0.032037806;
                    }
                } else {
                    if (input[2] < 0.39350474) {
                        var144 = -0.0148316715;
                    } else {
                        var144 = 0.04178966;
                    }
                }
            } else {
                if (input[2] < 0.49787998) {
                    if (input[6] < 2.0959425) {
                        var144 = -0.026024051;
                    } else {
                        var144 = 0.059086703;
                    }
                } else {
                    if (input[3] < 0.55822927) {
                        var144 = 0.045409717;
                    } else {
                        var144 = -0.026214706;
                    }
                }
            }
        }
    }
    double var145;
    if (input[1] < 1.3463372) {
        if (input[2] < 0.11512014) {
            if (input[0] < -1.5001535) {
                if (input[5] < 0.2963442) {
                    if (input[2] < -0.61060196) {
                        var145 = 0.01727071;
                    } else {
                        var145 = -0.05869455;
                    }
                } else {
                    if (input[8] < -1.0130309) {
                        var145 = -0.07072297;
                    } else {
                        var145 = 0.034686666;
                    }
                }
            } else {
                if (input[7] < 1.7396411) {
                    if (input[0] < -0.32691297) {
                        var145 = 0.010100141;
                    } else {
                        var145 = -0.012288188;
                    }
                } else {
                    if (input[3] < 1.0194443) {
                        var145 = 0.03428305;
                    } else {
                        var145 = 0.007720416;
                    }
                }
            }
        } else {
            if (input[7] < -0.19052146) {
                if (input[2] < 0.17500779) {
                    if (input[5] < 0.9652041) {
                        var145 = -0.035232466;
                    } else {
                        var145 = 0.013975784;
                    }
                } else {
                    if (input[5] < 0.39438874) {
                        var145 = -0.04029021;
                    } else {
                        var145 = -0.046823185;
                    }
                }
            } else {
                if (input[8] < -0.8093834) {
                    if (input[7] < 2.8662586) {
                        var145 = -0.027454386;
                    } else {
                        var145 = 0.044609077;
                    }
                } else {
                    if (input[2] < 0.39350474) {
                        var145 = 0.034646727;
                    } else {
                        var145 = -0.04142794;
                    }
                }
            }
        }
    } else {
        var145 = -0.04099947;
    }
    double var146;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            if (input[3] < 0.98658097) {
                var146 = -0.040634613;
            } else {
                var146 = -0.041611902;
            }
        } else {
            if (input[3] < 1.7358835) {
                if (input[5] < 0.64126486) {
                    if (input[4] < 1.1315169) {
                        var146 = -0.025328454;
                    } else {
                        var146 = 0.10307745;
                    }
                } else {
                    if (input[0] < 0.39292353) {
                        var146 = -0.01727689;
                    } else {
                        var146 = -0.041552432;
                    }
                }
            } else {
                var146 = -0.04223679;
            }
        }
    } else {
        if (input[2] < -1.5667169) {
            if (input[1] < 4.8541236) {
                if (input[5] < 1.0950221) {
                    if (input[7] < 2.8662586) {
                        var146 = 0.020410579;
                    } else {
                        var146 = -0.017554287;
                    }
                } else {
                    if (input[0] < 0.06857304) {
                        var146 = 0.038635883;
                    } else {
                        var146 = -0.0026088103;
                    }
                }
            } else {
                if (input[5] < 5.630825) {
                    if (input[5] < 5.1879473) {
                        var146 = 0.038461674;
                    } else {
                        var146 = 0.02612241;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var146 = -0.040524486;
                    } else {
                        var146 = 0.039953273;
                    }
                }
            }
        } else {
            if (input[2] < -1.167169) {
                if (input[5] < 2.4794507) {
                    if (input[0] < 2.3913321) {
                        var146 = 0.023759438;
                    } else {
                        var146 = -0.006628018;
                    }
                } else {
                    if (input[1] < 4.3832526) {
                        var146 = 0.025932636;
                    } else {
                        var146 = 0.037064992;
                    }
                }
            } else {
                if (input[5] < 1.766917) {
                    if (input[0] < 5.813713) {
                        var146 = 0.029061755;
                    } else {
                        var146 = -0.13967334;
                    }
                } else {
                    if (input[0] < 3.776753) {
                        var146 = 0.039409917;
                    } else {
                        var146 = 0.032619916;
                    }
                }
            }
        }
    }
    double var147;
    if (input[2] < 0.11512014) {
        if (input[0] < -1.7286664) {
            if (input[4] < 0.82070357) {
                if (input[1] < -0.013336726) {
                    if (input[0] < -2.1251266) {
                        var147 = -0.026349828;
                    } else {
                        var147 = -0.0018767039;
                    }
                } else {
                    if (input[6] < -1.411528) {
                        var147 = -0.0386006;
                    } else {
                        var147 = 0.07991596;
                    }
                }
            } else {
                if (input[7] < -0.1500774) {
                    if (input[8] < -0.964183) {
                        var147 = 0.11825818;
                    } else {
                        var147 = -0.014417397;
                    }
                } else {
                    if (input[4] < 1.2400445) {
                        var147 = -0.02929853;
                    } else {
                        var147 = -0.036570504;
                    }
                }
            }
        } else {
            if (input[1] < 4.8541236) {
                if (input[6] < 0.566215) {
                    if (input[0] < 3.8481317) {
                        var147 = 0.006982569;
                    } else {
                        var147 = 0.047038358;
                    }
                } else {
                    if (input[2] < -2.5455425) {
                        var147 = 0.031777475;
                    } else {
                        var147 = -0.006587403;
                    }
                }
            } else {
                if (input[1] < 6.7774177) {
                    if (input[6] < 0.7059682) {
                        var147 = -0.03032355;
                    } else {
                        var147 = 0.013076054;
                    }
                } else {
                    if (input[1] < 7.29961) {
                        var147 = -0.035218395;
                    } else {
                        var147 = -0.04008886;
                    }
                }
            }
        }
    } else {
        if (input[7] < -0.19052146) {
            if (input[4] < 0.9792598) {
                if (input[4] < 0.9190091) {
                    if (input[2] < 0.17500779) {
                        var147 = 0.035875406;
                    } else {
                        var147 = 0.04072363;
                    }
                } else {
                    if (input[0] < -0.83187574) {
                        var147 = -0.043264166;
                    } else {
                        var147 = 0.03767498;
                    }
                }
            } else {
                if (input[6] < 1.2912512) {
                    var147 = 0.04594546;
                } else {
                    if (input[2] < 0.41529825) {
                        var147 = 0.07173901;
                    } else {
                        var147 = 0.03933938;
                    }
                }
            }
        } else {
            if (input[6] < 1.3718796) {
                if (input[0] < -0.054812122) {
                    if (input[6] < -0.045634903) {
                        var147 = 0.041734688;
                    } else {
                        var147 = -0.0055021816;
                    }
                } else {
                    if (input[7] < 2.128306) {
                        var147 = 0.0414385;
                    } else {
                        var147 = -0.031416945;
                    }
                }
            } else {
                if (input[2] < 0.49787998) {
                    if (input[1] < -0.36940223) {
                        var147 = 0.04169102;
                    } else {
                        var147 = -0.028467929;
                    }
                } else {
                    if (input[1] < 1.097819) {
                        var147 = 0.045073617;
                    } else {
                        var147 = -0.026103986;
                    }
                }
            }
        }
    }
    double var148;
    if (input[1] < 1.3463372) {
        if (input[4] < 1.2727728) {
            if (input[6] < 0.054918017) {
                if (input[0] < -1.380883) {
                    if (input[4] < 0.32170585) {
                        var148 = -0.02469109;
                    } else {
                        var148 = 0.028506633;
                    }
                } else {
                    if (input[2] < -2.0680296) {
                        var148 = -0.06208405;
                    } else {
                        var148 = -0.032253146;
                    }
                }
            } else {
                if (input[2] < 0.4512054) {
                    if (input[3] < 1.7358835) {
                        var148 = 0.00070740853;
                    } else {
                        var148 = 0.02528039;
                    }
                } else {
                    if (input[1] < 0.08038696) {
                        var148 = -0.040723085;
                    } else {
                        var148 = 0.014655772;
                    }
                }
            }
        } else {
            if (input[0] < 0.28843397) {
                if (input[2] < -0.3393093) {
                    if (input[6] < -0.5624454) {
                        var148 = -0.00087690447;
                    } else {
                        var148 = 0.03418922;
                    }
                } else {
                    if (input[2] < 0.084040545) {
                        var148 = -0.0008076653;
                    } else {
                        var148 = -0.037642684;
                    }
                }
            } else {
                if (input[4] < 2.3749502) {
                    if (input[8] < -1.0069597) {
                        var148 = 0.02283411;
                    } else {
                        var148 = -0.012984771;
                    }
                } else {
                    if (input[6] < -0.26205736) {
                        var148 = -0.09496629;
                    } else {
                        var148 = 0.025685625;
                    }
                }
            }
        }
    } else {
        var148 = -0.040954374;
    }
    double var149;
    if (input[1] < 1.3463372) {
        if (input[1] < 1.2797261) {
            if (input[3] < 0.98658097) {
                var149 = -0.040602267;
            } else {
                var149 = -0.041545857;
            }
        } else {
            if (input[3] < 1.7358835) {
                if (input[4] < 1.2221057) {
                    if (input[4] < 1.0194646) {
                        var149 = -0.036830626;
                    } else {
                        var149 = 0.04661222;
                    }
                } else {
                    if (input[8] < -1.0087589) {
                        var149 = 0.06358267;
                    } else {
                        var149 = -0.0417662;
                    }
                }
            } else {
                var149 = -0.04211309;
            }
        }
    } else {
        if (input[6] < -0.40349558) {
            if (input[4] < 1.2889661) {
                if (input[6] < -0.74880636) {
                    if (input[6] < -0.9641092) {
                        var149 = 0.042297963;
                    } else {
                        var149 = 0.009537682;
                    }
                } else {
                    if (input[3] < 2.580319) {
                        var149 = -0.031540852;
                    } else {
                        var149 = -0.16349605;
                    }
                }
            } else {
                if (input[6] < -0.5164247) {
                    if (input[8] < -0.99195) {
                        var149 = 0.041331757;
                    } else {
                        var149 = 0.029296866;
                    }
                } else {
                    if (input[4] < 1.9904836) {
                        var149 = -0.0015880285;
                    } else {
                        var149 = 0.040724214;
                    }
                }
            }
        } else {
            if (input[6] < 1.084771) {
                if (input[1] < 5.465226) {
                    if (input[2] < -1.355827) {
                        var149 = 0.00030337964;
                    } else {
                        var149 = 0.024553727;
                    }
                } else {
                    if (input[1] < 6.7774177) {
                        var149 = 0.021974517;
                    } else {
                        var149 = 0.04003234;
                    }
                }
            } else {
                if (input[6] < 1.131379) {
                    if (input[4] < 0.9792598) {
                        var149 = -0.021787541;
                    } else {
                        var149 = 0.03163433;
                    }
                } else {
                    if (input[2] < -2.0680296) {
                        var149 = 0.035291944;
                    } else {
                        var149 = 0.040846147;
                    }
                }
            }
        }
    }
    double var150;
    var150 = sigmoid(var0 + var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29 + var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38 + var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50 + var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58 + var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76 + var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87 + var88 + var89 + var90 + var91 + var92 + var93 + var94 + var95 + var96 + var97 + var98 + var99 + var100 + var101 + var102 + var103 + var104 + var105 + var106 + var107 + var108 + var109 + var110 + var111 + var112 + var113 + var114 + var115 + var116 + var117 + var118 + var119 + var120 + var121 + var122 + var123 + var124 + var125 + var126 + var127 + var128 + var129 + var130 + var131 + var132 + var133 + var134 + var135 + var136 + var137 + var138 + var139 + var140 + var141 + var142 + var143 + var144 + var145 + var146 + var147 + var148 + var149);
    memcpy(output, (double[]){1.0 - var150, var150}, 2 * sizeof(double));
}
