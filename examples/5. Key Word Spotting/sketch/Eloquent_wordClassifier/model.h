#pragma once
//#include <cstdarg>
namespace Eloquent {
namespace ML {
namespace Port {
class RandomForest {
  public:
    /**
      Predict class for features vector
    */
    int predict(float *x) {
      uint8_t votes[2] = { 0 };
      // tree #1
      if (x[6] <= -65.5) {
        votes[0] += 1;
      }

      else {
        if (x[8] <= -13.5) {
          if (x[7] <= -29.5) {
            votes[1] += 1;
          }

          else {
            if (x[12] <= -8.5) {
              if (x[16] <= -1.5) {
                if (x[6] <= -0.5) {
                  if (x[14] <= -51.0) {
                    votes[1] += 1;
                  }

                  else {
                    votes[0] += 1;
                  }
                }

                else {
                  votes[1] += 1;
                }
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              votes[1] += 1;
            }
          }
        }

        else {
          if (x[23] <= -25.5) {
            if (x[7] <= -6.0) {
              votes[0] += 1;
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            if (x[7] <= 4.0) {
              votes[0] += 1;
            }

            else {
              votes[1] += 1;
            }
          }
        }
      }

      // tree #2
      if (x[37] <= -60.5) {
        votes[0] += 1;
      }

      else {
        if (x[37] <= -8.5) {
          if (x[29] <= -62.5) {
            votes[0] += 1;
          }

          else {
            if (x[25] <= -1.0) {
              if (x[39] <= -14.5) {
                if (x[15] <= -37.5) {
                  votes[1] += 1;
                }

                else {
                  votes[0] += 1;
                }
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              votes[0] += 1;
            }
          }
        }

        else {
          votes[0] += 1;
        }
      }

      // tree #3
      if (x[37] <= -60.5) {
        votes[0] += 1;
      }

      else {
        if (x[25] <= -1.0) {
          if (x[18] <= -33.5) {
            if (x[35] <= -57.5) {
              votes[0] += 1;
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            if (x[34] <= -48.0) {
              votes[0] += 1;
            }

            else {
              if (x[8] <= -7.5) {
                if (x[29] <= -19.5) {
                  if (x[24] <= -20.5) {
                    votes[1] += 1;
                  }

                  else {
                    votes[0] += 1;
                  }
                }

                else {
                  votes[1] += 1;
                }
              }

              else {
                votes[0] += 1;
              }
            }
          }
        }

        else {
          votes[0] += 1;
        }
      }

      // tree #4
      if (x[11] <= -65.0) {
        votes[0] += 1;
      }

      else {
        if (x[36] <= -6.5) {
          if (x[15] <= -65.0) {
            votes[0] += 1;
          }

          else {
            if (x[7] <= -16.5) {
              if (x[0] <= -89.0) {
                if (x[29] <= -52.5) {
                  votes[0] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              if (x[37] <= -14.0) {
                votes[0] += 1;
              }

              else {
                if (x[38] <= -13.5) {
                  votes[0] += 1;
                }

                else {
                  if (x[36] <= -14.0) {
                    votes[0] += 1;
                  }

                  else {
                    votes[1] += 1;
                  }
                }
              }
            }
          }
        }

        else {
          votes[0] += 1;
        }
      }

      // tree #5
      if (x[12] <= -73.0) {
        votes[0] += 1;
      }

      else {
        if (x[10] <= -39.0) {
          if (x[10] <= -81.0) {
            if (x[22] <= -42.5) {
              votes[0] += 1;
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            votes[1] += 1;
          }
        }

        else {
          if (x[32] <= -16.5) {
            votes[0] += 1;
          }

          else {
            if (x[28] <= -23.5) {
              votes[0] += 1;
            }

            else {
              if (x[1] <= -24.0) {
                votes[0] += 1;
              }

              else {
                votes[1] += 1;
              }
            }
          }
        }
      }

      // tree #6
      if (x[34] <= -54.0) {
        votes[0] += 1;
      }

      else {
        if (x[20] <= -37.0) {
          if (x[36] <= -41.0) {
            votes[1] += 1;
          }

          else {
            if (x[10] <= -54.0) {
              votes[1] += 1;
            }

            else {
              votes[0] += 1;
            }
          }
        }

        else {
          if (x[1] <= -15.5) {
            votes[0] += 1;
          }

          else {
            if (x[2] <= 8.5) {
              votes[1] += 1;
            }

            else {
              votes[0] += 1;
            }
          }
        }
      }

      // tree #7
      if (x[38] <= -53.5) {
        votes[0] += 1;
      }

      else {
        if (x[7] <= -21.5) {
          if (x[15] <= -54.5) {
            votes[0] += 1;
          }

          else {
            votes[1] += 1;
          }
        }

        else {
          if (x[34] <= -13.5) {
            votes[0] += 1;
          }

          else {
            if (x[15] <= -7.5) {
              if (x[27] <= -18.0) {
                votes[0] += 1;
              }

              else {
                if (x[32] <= -15.0) {
                  votes[0] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }
            }

            else {
              votes[1] += 1;
            }
          }
        }
      }

      // tree #8
      if (x[15] <= -54.5) {
        votes[0] += 1;
      }

      else {
        if (x[37] <= -8.5) {
          if (x[32] <= -10.5) {
            if (x[33] <= -60.5) {
              votes[0] += 1;
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            if (x[29] <= -15.5) {
              votes[0] += 1;
            }

            else {
              if (x[19] <= -6.5) {
                votes[1] += 1;
              }

              else {
                votes[0] += 1;
              }
            }
          }
        }

        else {
          votes[0] += 1;
        }
      }

      // tree #9
      if (x[35] <= -57.5) {
        votes[0] += 1;
      }

      else {
        if (x[30] <= -8.0) {
          if (x[35] <= -8.0) {
            if (x[28] <= -42.0) {
              if (x[22] <= -56.5) {
                votes[0] += 1;
              }

              else {
                if (x[25] <= -78.5) {
                  votes[0] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }
            }

            else {
              if (x[16] <= -3.5) {
                votes[1] += 1;
              }

              else {
                if (x[26] <= -10.5) {
                  votes[0] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }
            }
          }

          else {
            votes[0] += 1;
          }
        }

        else {
          votes[0] += 1;
        }
      }

      // tree #10
      if (x[33] <= -10.0) {
        if (x[5] <= -4.5) {
          if (x[4] <= -76.5) {
            if (x[12] <= -81.5) {
              votes[0] += 1;
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            if (x[22] <= -17.5) {
              if (x[27] <= -20.5) {
                if (x[22] <= -24.5) {
                  if (x[15] <= -84.5) {
                    votes[1] += 1;
                  }

                  else {
                    if (x[23] <= -77.5) {
                      votes[1] += 1;
                    }

                    else {
                      if (x[37] <= -58.5) {
                        if (x[17] <= -40.5) {
                          votes[1] += 1;
                        }

                        else {
                          votes[0] += 1;
                        }
                      }

                      else {
                        votes[0] += 1;
                      }
                    }
                  }
                }

                else {
                  votes[1] += 1;
                }
              }

              else {
                if (x[23] <= -14.0) {
                  votes[1] += 1;
                }

                else {
                  votes[0] += 1;
                }
              }
            }

            else {
              votes[0] += 1;
            }
          }
        }

        else {
          votes[1] += 1;
        }
      }

      else {
        votes[0] += 1;
      }

      // tree #11
      if (x[14] <= -53.5) {
        if (x[25] <= -20.5) {
          votes[0] += 1;
        }

        else {
          if (x[37] <= -40.5) {
            votes[1] += 1;
          }

          else {
            votes[0] += 1;
          }
        }
      }

      else {
        if (x[17] <= -44.5) {
          votes[1] += 1;
        }

        else {
          if (x[34] <= -12.5) {
            if (x[8] <= -42.0) {
              if (x[20] <= -56.5) {
                votes[0] += 1;
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              votes[0] += 1;
            }
          }

          else {
            if (x[26] <= -16.5) {
              if (x[7] <= -17.0) {
                votes[1] += 1;
              }

              else {
                votes[0] += 1;
              }
            }

            else {
              votes[1] += 1;
            }
          }
        }
      }

      // tree #12
      if (x[27] <= -54.5) {
        if (x[22] <= -7.0) {
          votes[0] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      else {
        if (x[31] <= -9.5) {
          if (x[21] <= -6.5) {
            if (x[32] <= -78.0) {
              votes[0] += 1;
            }

            else {
              if (x[38] <= -7.5) {
                if (x[31] <= -11.5) {
                  votes[1] += 1;
                }

                else {
                  if (x[7] <= -10.0) {
                    votes[0] += 1;
                  }

                  else {
                    votes[1] += 1;
                  }
                }
              }

              else {
                votes[0] += 1;
              }
            }
          }

          else {
            if (x[21] <= -2.0) {
              votes[0] += 1;
            }

            else {
              votes[1] += 1;
            }
          }
        }

        else {
          votes[0] += 1;
        }
      }

      // tree #13
      if (x[37] <= -9.0) {
        if (x[36] <= -55.5) {
          votes[0] += 1;
        }

        else {
          if (x[30] <= -56.5) {
            if (x[23] <= -32.0) {
              votes[0] += 1;
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            if (x[8] <= -14.5) {
              if (x[2] <= 0.0) {
                votes[1] += 1;
              }

              else {
                if (x[22] <= -6.0) {
                  votes[1] += 1;
                }

                else {
                  votes[0] += 1;
                }
              }
            }

            else {
              if (x[32] <= -10.5) {
                votes[1] += 1;
              }

              else {
                if (x[26] <= -16.0) {
                  votes[0] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }
            }
          }
        }
      }

      else {
        votes[0] += 1;
      }

      // tree #14
      if (x[28] <= -56.0) {
        votes[0] += 1;
      }

      else {
        if (x[8] <= -14.5) {
          if (x[37] <= -60.5) {
            votes[0] += 1;
          }

          else {
            if (x[6] <= -73.0) {
              votes[0] += 1;
            }

            else {
              if (x[19] <= -9.5) {
                votes[1] += 1;
              }

              else {
                if (x[3] <= -9.5) {
                  votes[1] += 1;
                }

                else {
                  votes[0] += 1;
                }
              }
            }
          }
        }

        else {
          if (x[15] <= -6.5) {
            if (x[13] <= -44.5) {
              votes[1] += 1;
            }

            else {
              if (x[15] <= -26.5) {
                if (x[2] <= -1.5) {
                  votes[0] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }

              else {
                votes[0] += 1;
              }
            }
          }

          else {
            votes[1] += 1;
          }
        }
      }

      // tree #15
      if (x[36] <= -9.5) {
        if (x[39] <= -54.5) {
          votes[0] += 1;
        }

        else {
          if (x[17] <= -40.5) {
            if (x[7] <= -70.0) {
              if (x[23] <= -40.0) {
                votes[1] += 1;
              }

              else {
                votes[0] += 1;
              }
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            if (x[13] <= -20.0) {
              votes[0] += 1;
            }

            else {
              if (x[12] <= -9.0) {
                if (x[17] <= -10.0) {
                  votes[0] += 1;
                }

                else {
                  if (x[26] <= -10.0) {
                    votes[1] += 1;
                  }

                  else {
                    votes[0] += 1;
                  }
                }
              }

              else {
                votes[1] += 1;
              }
            }
          }
        }
      }

      else {
        if (x[33] <= -65.5) {
          votes[1] += 1;
        }

        else {
          if (x[15] <= -5.5) {
            votes[0] += 1;
          }

          else {
            if (x[11] <= -24.0) {
              votes[0] += 1;
            }

            else {
              votes[1] += 1;
            }
          }
        }
      }

      // tree #16
      if (x[5] <= -4.5) {
        if (x[4] <= -76.5) {
          votes[1] += 1;
        }

        else {
          if (x[35] <= -51.0) {
            if (x[37] <= -40.0) {
              if (x[31] <= -58.5) {
                votes[0] += 1;
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              votes[0] += 1;
            }
          }

          else {
            if (x[11] <= -22.5) {
              votes[0] += 1;
            }

            else {
              if (x[4] <= -14.0) {
                if (x[11] <= -17.0) {
                  if (x[39] <= -27.0) {
                    votes[0] += 1;
                  }

                  else {
                    votes[1] += 1;
                  }
                }

                else {
                  votes[0] += 1;
                }
              }

              else {
                votes[1] += 1;
              }
            }
          }
        }
      }

      else {
        if (x[31] <= -20.5) {
          votes[0] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #17
      if (x[32] <= -10.5) {
        if (x[28] <= -18.5) {
          if (x[1] <= -49.5) {
            if (x[27] <= -20.5) {
              votes[0] += 1;
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            if (x[21] <= -34.5) {
              if (x[32] <= -77.0) {
                votes[0] += 1;
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              votes[0] += 1;
            }
          }
        }

        else {
          if (x[2] <= 8.5) {
            if (x[3] <= -4.0) {
              votes[1] += 1;
            }

            else {
              if (x[34] <= -14.5) {
                votes[0] += 1;
              }

              else {
                votes[1] += 1;
              }
            }
          }

          else {
            votes[0] += 1;
          }
        }
      }

      else {
        votes[0] += 1;
      }

      // tree #18
      if (x[25] <= -1.0) {
        if (x[36] <= -6.0) {
          if (x[29] <= -19.5) {
            if (x[7] <= -23.5) {
              if (x[14] <= -49.5) {
                if (x[24] <= -59.5) {
                  votes[1] += 1;
                }

                else {
                  if (x[19] <= -44.5) {
                    votes[1] += 1;
                  }

                  else {
                    votes[0] += 1;
                  }
                }
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              if (x[4] <= -30.0) {
                votes[1] += 1;
              }

              else {
                votes[0] += 1;
              }
            }
          }

          else {
            votes[1] += 1;
          }
        }

        else {
          votes[0] += 1;
        }
      }

      else {
        votes[0] += 1;
      }

      // tree #19
      if (x[25] <= -1.0) {
        if (x[35] <= -8.5) {
          if (x[11] <= -64.5) {
            votes[0] += 1;
          }

          else {
            if (x[31] <= -9.0) {
              if (x[27] <= -78.0) {
                votes[0] += 1;
              }

              else {
                if (x[36] <= -4.0) {
                  if (x[20] <= -12.5) {
                    votes[1] += 1;
                  }

                  else {
                    if (x[27] <= -17.0) {
                      votes[0] += 1;
                    }

                    else {
                      votes[1] += 1;
                    }
                  }
                }

                else {
                  votes[0] += 1;
                }
              }
            }

            else {
              votes[0] += 1;
            }
          }
        }

        else {
          votes[0] += 1;
        }
      }

      else {
        votes[0] += 1;
      }

      // tree #20
      if (x[28] <= -54.0) {
        votes[0] += 1;
      }

      else {
        if (x[8] <= -13.5) {
          if (x[30] <= -8.0) {
            if (x[39] <= -10.5) {
              if (x[10] <= -93.5) {
                votes[0] += 1;
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              if (x[0] <= -28.5) {
                if (x[39] <= -5.0) {
                  votes[1] += 1;
                }

                else {
                  votes[0] += 1;
                }
              }

              else {
                votes[0] += 1;
              }
            }
          }

          else {
            votes[0] += 1;
          }
        }

        else {
          if (x[11] <= -1.0) {
            votes[0] += 1;
          }

          else {
            votes[1] += 1;
          }
        }
      }

      // tree #21
      if (x[36] <= -9.5) {
        if (x[11] <= -64.5) {
          if (x[25] <= -73.5) {
            votes[1] += 1;
          }

          else {
            votes[0] += 1;
          }
        }

        else {
          if (x[33] <= -75.5) {
            votes[0] += 1;
          }

          else {
            if (x[34] <= -25.5) {
              votes[1] += 1;
            }

            else {
              if (x[39] <= -14.5) {
                votes[0] += 1;
              }

              else {
                if (x[27] <= -24.5) {
                  votes[0] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }
            }
          }
        }
      }

      else {
        if (x[33] <= -14.5) {
          votes[0] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #22
      if (x[28] <= -57.5) {
        votes[0] += 1;
      }

      else {
        if (x[4] <= -19.0) {
          if (x[7] <= -82.5) {
            votes[0] += 1;
          }

          else {
            if (x[13] <= -13.5) {
              if (x[31] <= -48.5) {
                if (x[30] <= -26.0) {
                  votes[1] += 1;
                }

                else {
                  votes[0] += 1;
                }
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              votes[0] += 1;
            }
          }
        }

        else {
          if (x[14] <= -3.5) {
            if (x[5] <= -4.5) {
              if (x[16] <= -1.5) {
                votes[0] += 1;
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            votes[1] += 1;
          }
        }
      }

      // tree #23
      if (x[30] <= -56.5) {
        votes[0] += 1;
      }

      else {
        if (x[3] <= -17.5) {
          if (x[8] <= -78.0) {
            votes[0] += 1;
          }

          else {
            if (x[32] <= -10.0) {
              if (x[0] <= -22.0) {
                votes[1] += 1;
              }

              else {
                votes[0] += 1;
              }
            }

            else {
              votes[0] += 1;
            }
          }
        }

        else {
          if (x[15] <= -4.5) {
            if (x[11] <= -7.0) {
              if (x[22] <= -12.5) {
                votes[0] += 1;
              }

              else {
                if (x[1] <= -8.0) {
                  votes[0] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            votes[1] += 1;
          }
        }
      }

      // tree #24
      if (x[30] <= -56.5) {
        if (x[24] <= -73.5) {
          votes[1] += 1;
        }

        else {
          votes[0] += 1;
        }
      }

      else {
        if (x[38] <= -9.0) {
          if (x[2] <= -1.5) {
            if (x[0] <= -24.5) {
              if (x[4] <= -87.5) {
                votes[0] += 1;
              }

              else {
                if (x[24] <= -1.0) {
                  votes[1] += 1;
                }

                else {
                  if (x[22] <= -14.0) {
                    votes[0] += 1;
                  }

                  else {
                    votes[1] += 1;
                  }
                }
              }
            }

            else {
              if (x[24] <= -25.0) {
                votes[0] += 1;
              }

              else {
                votes[1] += 1;
              }
            }
          }

          else {
            if (x[25] <= -11.5) {
              if (x[24] <= -11.0) {
                votes[1] += 1;
              }

              else {
                votes[0] += 1;
              }
            }

            else {
              votes[0] += 1;
            }
          }
        }

        else {
          votes[0] += 1;
        }
      }

      // tree #25
      if (x[19] <= -33.0) {
        if (x[39] <= -25.0) {
          votes[1] += 1;
        }

        else {
          votes[0] += 1;
        }
      }

      else {
        if (x[11] <= -9.0) {
          if (x[7] <= -14.0) {
            if (x[37] <= -9.5) {
              if (x[35] <= -48.0) {
                votes[0] += 1;
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              votes[0] += 1;
            }
          }

          else {
            if (x[7] <= -4.5) {
              votes[0] += 1;
            }

            else {
              if (x[24] <= -18.0) {
                votes[1] += 1;
              }

              else {
                votes[0] += 1;
              }
            }
          }
        }

        else {
          if (x[20] <= -20.0) {
            votes[0] += 1;
          }

          else {
            votes[1] += 1;
          }
        }
      }

      // tree #26
      if (x[29] <= -42.5) {
        if (x[28] <= -34.5) {
          if (x[17] <= -11.5) {
            votes[0] += 1;
          }

          else {
            votes[1] += 1;
          }
        }

        else {
          votes[1] += 1;
        }
      }

      else {
        if (x[30] <= -8.5) {
          if (x[4] <= -19.0) {
            if (x[2] <= -78.0) {
              votes[0] += 1;
            }

            else {
              if (x[30] <= -64.0) {
                votes[0] += 1;
              }

              else {
                votes[1] += 1;
              }
            }
          }

          else {
            if (x[12] <= -8.0) {
              if (x[20] <= -16.0) {
                votes[0] += 1;
              }

              else {
                if (x[18] <= -13.0) {
                  votes[1] += 1;
                }

                else {
                  votes[0] += 1;
                }
              }
            }

            else {
              votes[1] += 1;
            }
          }
        }

        else {
          votes[0] += 1;
        }
      }

      // tree #27
      if (x[15] <= -12.5) {
        if (x[1] <= -39.5) {
          if (x[11] <= -65.0) {
            votes[0] += 1;
          }

          else {
            if (x[35] <= -41.5) {
              votes[1] += 1;
            }

            else {
              votes[0] += 1;
            }
          }
        }

        else {
          if (x[20] <= -8.0) {
            votes[0] += 1;
          }

          else {
            votes[1] += 1;
          }
        }
      }

      else {
        if (x[2] <= 5.0) {
          if (x[22] <= -6.0) {
            if (x[8] <= -14.5) {
              votes[1] += 1;
            }

            else {
              votes[0] += 1;
            }
          }

          else {
            votes[0] += 1;
          }
        }

        else {
          votes[0] += 1;
        }
      }

      // tree #28
      if (x[0] <= -26.5) {
        if (x[27] <= -7.0) {
          if (x[33] <= -48.5) {
            if (x[3] <= -55.5) {
              votes[1] += 1;
            }

            else {
              votes[0] += 1;
            }
          }

          else {
            if (x[30] <= -8.5) {
              if (x[31] <= -9.5) {
                votes[1] += 1;
              }

              else {
                votes[0] += 1;
              }
            }

            else {
              votes[0] += 1;
            }
          }
        }

        else {
          if (x[20] <= -49.5) {
            votes[1] += 1;
          }

          else {
            votes[0] += 1;
          }
        }
      }

      else {
        if (x[13] <= -14.5) {
          if (x[14] <= -18.5) {
            votes[1] += 1;
          }

          else {
            votes[0] += 1;
          }
        }

        else {
          votes[0] += 1;
        }
      }

      // tree #29
      if (x[31] <= -10.0) {
        if (x[14] <= -67.5) {
          votes[0] += 1;
        }

        else {
          if (x[4] <= -24.0) {
            if (x[35] <= -61.0) {
              votes[0] += 1;
            }

            else {
              if (x[37] <= -54.5) {
                if (x[11] <= -57.5) {
                  votes[0] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }

              else {
                votes[1] += 1;
              }
            }
          }

          else {
            if (x[20] <= -6.5) {
              if (x[39] <= -33.5) {
                votes[1] += 1;
              }

              else {
                votes[0] += 1;
              }
            }

            else {
              votes[1] += 1;
            }
          }
        }
      }

      else {
        votes[0] += 1;
      }

      // tree #30
      if (x[30] <= -56.5) {
        if (x[20] <= -74.0) {
          votes[1] += 1;
        }

        else {
          votes[0] += 1;
        }
      }

      else {
        if (x[30] <= -8.5) {
          if (x[35] <= -7.0) {
            if (x[11] <= -77.5) {
              votes[0] += 1;
            }

            else {
              if (x[37] <= -4.5) {
                if (x[22] <= -16.5) {
                  votes[1] += 1;
                }

                else {
                  if (x[1] <= -24.0) {
                    votes[0] += 1;
                  }

                  else {
                    if (x[35] <= -14.0) {
                      votes[0] += 1;
                    }

                    else {
                      votes[1] += 1;
                    }
                  }
                }
              }

              else {
                votes[0] += 1;
              }
            }
          }

          else {
            votes[0] += 1;
          }
        }

        else {
          votes[0] += 1;
        }
      }

      // return argmax of votes
      uint8_t classIdx = 0;
      float maxVotes = votes[0];

      for (uint8_t i = 1; i < 2; i++) {
        if (votes[i] > maxVotes) {
          classIdx = i;
          maxVotes = votes[i];
        }
      }

      return classIdx;
    }

    /**
      Predict readable class name
    */
    const char* predictLabel(float *x) {
      return idxToLabel(predict(x));
    }

    /**
      Convert class idx to readable name
    */
    const char* idxToLabel(uint8_t classIdx) {
      switch (classIdx) {
        case 0:
          return "No";
        case 1:
          return "Yes";
        default:
          return "Houston we have a problem";
      }
    }

  protected:
};
}
}
}
