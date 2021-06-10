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
      uint8_t votes[7] = { 0 };
      // tree #1
      if (x[5] <= 0.5) {
        if (x[23] <= 0.5) {
          if (x[8] <= 0.5) {
            votes[5] += 1;
          }

          else {
            votes[4] += 1;
          }
        }

        else {
          if (x[11] <= 0.5) {
            if (x[21] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[0] += 1;
            }
          }

          else {
            votes[6] += 1;
          }
        }
      }

      else {
        if (x[26] <= 0.5) {
          votes[3] += 1;
        }

        else {
          if (x[16] <= 0.5) {
            if (x[24] <= 0.5) {
              if (x[22] <= 0.5) {
                votes[1] += 1;
              }

              else {
                votes[2] += 1;
              }
            }

            else {
              if (x[9] <= 0.5) {
                if (x[19] <= 0.5) {
                  if (x[13] <= 0.5) {
                    votes[1] += 1;
                  }

                  else {
                    votes[3] += 1;
                  }
                }

                else {
                  if (x[7] <= 0.5) {
                    votes[2] += 1;
                  }

                  else {
                    votes[1] += 1;
                  }
                }
              }

              else {
                votes[3] += 1;
              }
            }
          }

          else {
            votes[6] += 1;
          }
        }
      }

      // tree #2
      if (x[24] <= 0.5) {
        if (x[4] <= 0.5) {
          if (x[16] <= 0.5) {
            votes[4] += 1;
          }

          else {
            if (x[17] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[4] += 1;
            }
          }
        }

        else {
          if (x[22] <= 0.5) {
            votes[3] += 1;
          }

          else {
            votes[2] += 1;
          }
        }
      }

      else {
        if (x[5] <= 0.5) {
          if (x[17] <= 0.5) {
            if (x[21] <= 0.5) {
              votes[5] += 1;
            }

            else {
              if (x[12] <= 0.5) {
                if (x[23] <= 0.5) {
                  votes[5] += 1;
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
            if (x[8] <= 0.5) {
              votes[0] += 1;
            }

            else {
              votes[6] += 1;
            }
          }
        }

        else {
          if (x[17] <= 0.5) {
            if (x[18] <= 0.5) {
              if (x[10] <= 0.5) {
                if (x[23] <= 0.5) {
                  votes[2] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }

              else {
                votes[3] += 1;
              }
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            votes[6] += 1;
          }
        }
      }

      // tree #3
      if (x[5] <= 0.5) {
        if (x[25] <= 0.5) {
          votes[4] += 1;
        }

        else {
          if (x[7] <= 0.5) {
            if (x[18] <= 0.5) {
              if (x[19] <= 0.5) {
                votes[5] += 1;
              }

              else {
                if (x[24] <= 0.5) {
                  votes[5] += 1;
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
            if (x[6] <= 0.5) {
              votes[6] += 1;
            }

            else {
              votes[4] += 1;
            }
          }
        }
      }

      else {
        if (x[16] <= 0.5) {
          if (x[3] <= 0.5) {
            if (x[10] <= 0.5) {
              if (x[22] <= 0.5) {
                votes[1] += 1;
              }

              else {
                if (x[21] <= 0.5) {
                  votes[2] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }
            }

            else {
              votes[3] += 1;
            }
          }

          else {
            if (x[12] <= 0.5) {
              if (x[22] <= 0.5) {
                votes[2] += 1;
              }

              else {
                if (x[26] <= 0.5) {
                  votes[2] += 1;
                }

                else {
                  if (x[23] <= 0.5) {
                    votes[2] += 1;
                  }

                  else {
                    votes[1] += 1;
                  }
                }
              }
            }

            else {
              votes[3] += 1;
            }
          }
        }

        else {
          votes[6] += 1;
        }
      }

      // tree #4
      if (x[5] <= 0.5) {
        if (x[9] <= 0.5) {
          if (x[23] <= 0.5) {
            votes[5] += 1;
          }

          else {
            if (x[15] <= 0.5) {
              votes[0] += 1;
            }

            else {
              if (x[22] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[0] += 1;
              }
            }
          }
        }

        else {
          if (x[16] <= 0.5) {
            votes[4] += 1;
          }

          else {
            votes[6] += 1;
          }
        }
      }

      else {
        if (x[17] <= 0.5) {
          if (x[23] <= 0.5) {
            if (x[21] <= 0.5) {
              if (x[24] <= 0.5) {
                votes[3] += 1;
              }

              else {
                if (x[20] <= 0.5) {
                  votes[3] += 1;
                }

                else {
                  votes[2] += 1;
                }
              }
            }

            else {
              votes[2] += 1;
            }
          }

          else {
            if (x[7] <= 0.5) {
              votes[2] += 1;
            }

            else {
              votes[1] += 1;
            }
          }
        }

        else {
          votes[6] += 1;
        }
      }

      // tree #5
      if (x[12] <= 0.5) {
        if (x[15] <= 0.5) {
          if (x[5] <= 0.5) {
            votes[4] += 1;
          }

          else {
            if (x[7] <= 0.5) {
              if (x[10] <= 0.5) {
                if (x[19] <= 0.5) {
                  votes[2] += 1;
                }

                else {
                  if (x[18] <= 0.5) {
                    votes[2] += 1;
                  }

                  else {
                    votes[1] += 1;
                  }
                }
              }

              else {
                votes[3] += 1;
              }
            }

            else {
              votes[1] += 1;
            }
          }
        }

        else {
          if (x[24] <= 0.5) {
            votes[5] += 1;
          }

          else {
            votes[0] += 1;
          }
        }
      }

      else {
        if (x[15] <= 0.5) {
          if (x[19] <= 0.5) {
            votes[3] += 1;
          }

          else {
            if (x[22] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[0] += 1;
            }
          }
        }

        else {
          votes[6] += 1;
        }
      }

      // tree #6
      if (x[23] <= 0.5) {
        if (x[6] <= 0.5) {
          if (x[15] <= 0.5) {
            if (x[4] <= 0.5) {
              votes[4] += 1;
            }

            else {
              votes[3] += 1;
            }
          }

          else {
            votes[5] += 1;
          }
        }

        else {
          if (x[26] <= 0.5) {
            if (x[8] <= 0.5) {
              votes[3] += 1;
            }

            else {
              votes[4] += 1;
            }
          }

          else {
            if (x[12] <= 0.5) {
              if (x[19] <= 0.5) {
                votes[2] += 1;
              }

              else {
                votes[4] += 1;
              }
            }

            else {
              votes[3] += 1;
            }
          }
        }
      }

      else {
        if (x[11] <= 0.5) {
          if (x[20] <= 0.5) {
            if (x[5] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[2] += 1;
            }
          }

          else {
            if (x[4] <= 0.5) {
              if (x[18] <= 0.5) {
                if (x[22] <= 0.5) {
                  votes[5] += 1;
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
              votes[1] += 1;
            }
          }
        }

        else {
          votes[6] += 1;
        }
      }

      // tree #7
      if (x[5] <= 0.5) {
        if (x[16] <= 0.5) {
          if (x[20] <= 0.5) {
            votes[4] += 1;
          }

          else {
            if (x[10] <= 0.5) {
              if (x[21] <= 0.5) {
                if (x[14] <= 0.5) {
                  votes[4] += 1;
                }

                else {
                  votes[5] += 1;
                }
              }

              else {
                votes[0] += 1;
              }
            }

            else {
              votes[4] += 1;
            }
          }
        }

        else {
          if (x[17] <= 0.5) {
            votes[5] += 1;
          }

          else {
            votes[6] += 1;
          }
        }
      }

      else {
        if (x[24] <= 0.5) {
          if (x[10] <= 0.5) {
            if (x[7] <= 0.5) {
              votes[2] += 1;
            }

            else {
              if (x[12] <= 0.5) {
                votes[1] += 1;
              }

              else {
                votes[3] += 1;
              }
            }
          }

          else {
            votes[3] += 1;
          }
        }

        else {
          if (x[11] <= 0.5) {
            if (x[3] <= 0.5) {
              votes[1] += 1;
            }

            else {
              if (x[20] <= 0.5) {
                if (x[26] <= 0.5) {
                  votes[2] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }

              else {
                if (x[7] <= 0.5) {
                  if (x[18] <= 0.5) {
                    votes[2] += 1;
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
          }

          else {
            if (x[23] <= 0.5) {
              votes[3] += 1;
            }

            else {
              votes[6] += 1;
            }
          }
        }
      }

      // tree #8
      if (x[5] <= 0.5) {
        if (x[8] <= 0.5) {
          if (x[23] <= 0.5) {
            votes[5] += 1;
          }

          else {
            if (x[12] <= 0.5) {
              if (x[20] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[0] += 1;
              }
            }

            else {
              votes[5] += 1;
            }
          }
        }

        else {
          if (x[3] <= 0.5) {
            votes[4] += 1;
          }

          else {
            votes[6] += 1;
          }
        }
      }

      else {
        if (x[16] <= 0.5) {
          if (x[27] <= 0.5) {
            if (x[28] <= 0.5) {
              votes[3] += 1;
            }

            else {
              if (x[14] <= 0.5) {
                if (x[9] <= 0.5) {
                  votes[2] += 1;
                }

                else {
                  votes[3] += 1;
                }
              }

              else {
                votes[3] += 1;
              }
            }
          }

          else {
            if (x[7] <= 0.5) {
              if (x[19] <= 0.5) {
                if (x[22] <= 0.5) {
                  votes[3] += 1;
                }

                else {
                  votes[2] += 1;
                }
              }

              else {
                if (x[22] <= 0.5) {
                  votes[2] += 1;
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

        else {
          votes[6] += 1;
        }
      }

      // tree #9
      if (x[8] <= 0.5) {
        if (x[11] <= 0.5) {
          if (x[22] <= 0.5) {
            if (x[3] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[2] += 1;
            }
          }

          else {
            if (x[4] <= 0.5) {
              votes[0] += 1;
            }

            else {
              if (x[7] <= 0.5) {
                votes[2] += 1;
              }

              else {
                votes[1] += 1;
              }
            }
          }
        }

        else {
          if (x[17] <= 0.5) {
            votes[3] += 1;
          }

          else {
            if (x[16] <= 0.5) {
              votes[0] += 1;
            }

            else {
              votes[6] += 1;
            }
          }
        }
      }

      else {
        if (x[4] <= 0.5) {
          votes[4] += 1;
        }

        else {
          if (x[20] <= 0.5) {
            if (x[25] <= 0.5) {
              votes[3] += 1;
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            votes[6] += 1;
          }
        }
      }

      // tree #10
      if (x[13] <= 0.5) {
        if (x[9] <= 0.5) {
          if (x[24] <= 0.5) {
            if (x[5] <= 0.5) {
              votes[5] += 1;
            }

            else {
              if (x[3] <= 0.5) {
                votes[1] += 1;
              }

              else {
                votes[2] += 1;
              }
            }
          }

          else {
            if (x[22] <= 0.5) {
              votes[2] += 1;
            }

            else {
              if (x[25] <= 0.5) {
                votes[2] += 1;
              }

              else {
                if (x[14] <= 0.5) {
                  if (x[3] <= 0.5) {
                    votes[1] += 1;
                  }

                  else {
                    if (x[23] <= 0.5) {
                      votes[2] += 1;
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
          }
        }

        else {
          if (x[21] <= 0.5) {
            if (x[7] <= 0.5) {
              votes[3] += 1;
            }

            else {
              votes[4] += 1;
            }
          }

          else {
            votes[4] += 1;
          }
        }
      }

      else {
        if (x[19] <= 0.5) {
          votes[3] += 1;
        }

        else {
          if (x[16] <= 0.5) {
            if (x[21] <= 0.5) {
              votes[5] += 1;
            }

            else {
              if (x[17] <= 0.5) {
                if (x[23] <= 0.5) {
                  votes[5] += 1;
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
            votes[6] += 1;
          }
        }
      }

      // tree #11
      if (x[13] <= 0.5) {
        if (x[5] <= 0.5) {
          if (x[19] <= 0.5) {
            votes[5] += 1;
          }

          else {
            if (x[25] <= 0.5) {
              votes[4] += 1;
            }

            else {
              if (x[22] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[0] += 1;
              }
            }
          }
        }

        else {
          if (x[9] <= 0.5) {
            if (x[25] <= 0.5) {
              if (x[8] <= 0.5) {
                votes[2] += 1;
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              if (x[7] <= 0.5) {
                if (x[24] <= 0.5) {
                  votes[2] += 1;
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
            votes[3] += 1;
          }
        }
      }

      else {
        if (x[5] <= 0.5) {
          if (x[7] <= 0.5) {
            if (x[11] <= 0.5) {
              if (x[15] <= 0.5) {
                votes[0] += 1;
              }

              else {
                if (x[20] <= 0.5) {
                  votes[5] += 1;
                }

                else {
                  if (x[23] <= 0.5) {
                    votes[5] += 1;
                  }

                  else {
                    votes[0] += 1;
                  }
                }
              }
            }

            else {
              votes[6] += 1;
            }
          }

          else {
            votes[6] += 1;
          }
        }

        else {
          if (x[15] <= 0.5) {
            votes[3] += 1;
          }

          else {
            votes[6] += 1;
          }
        }
      }

      // tree #12
      if (x[23] <= 0.5) {
        if (x[7] <= 0.5) {
          if (x[21] <= 0.5) {
            if (x[4] <= 0.5) {
              votes[4] += 1;
            }

            else {
              votes[3] += 1;
            }
          }

          else {
            if (x[2] <= 0.5) {
              if (x[5] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[2] += 1;
              }
            }

            else {
              votes[2] += 1;
            }
          }
        }

        else {
          if (x[26] <= 0.5) {
            votes[4] += 1;
          }

          else {
            if (x[17] <= 0.5) {
              votes[1] += 1;
            }

            else {
              votes[4] += 1;
            }
          }
        }
      }

      else {
        if (x[11] <= 0.5) {
          if (x[6] <= 0.5) {
            if (x[12] <= 0.5) {
              if (x[13] <= 0.5) {
                votes[0] += 1;
              }

              else {
                if (x[22] <= 0.5) {
                  votes[5] += 1;
                }

                else {
                  votes[0] += 1;
                }
              }
            }

            else {
              if (x[22] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[0] += 1;
              }
            }
          }

          else {
            if (x[3] <= 0.5) {
              if (x[25] <= 0.5) {
                votes[2] += 1;
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              if (x[26] <= 0.5) {
                votes[2] += 1;
              }

              else {
                votes[1] += 1;
              }
            }
          }
        }

        else {
          if (x[9] <= 0.5) {
            if (x[3] <= 0.5) {
              if (x[4] <= 0.5) {
                votes[0] += 1;
              }

              else {
                votes[6] += 1;
              }
            }

            else {
              votes[6] += 1;
            }
          }

          else {
            votes[6] += 1;
          }
        }
      }

      // tree #13
      if (x[7] <= 0.5) {
        if (x[4] <= 0.5) {
          if (x[17] <= 0.5) {
            if (x[22] <= 0.5) {
              votes[5] += 1;
            }

            else {
              if (x[14] <= 0.5) {
                votes[4] += 1;
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
          if (x[10] <= 0.5) {
            if (x[17] <= 0.5) {
              if (x[18] <= 0.5) {
                votes[2] += 1;
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              votes[6] += 1;
            }
          }

          else {
            if (x[18] <= 0.5) {
              votes[3] += 1;
            }

            else {
              votes[6] += 1;
            }
          }
        }
      }

      else {
        if (x[19] <= 0.5) {
          if (x[25] <= 0.5) {
            votes[3] += 1;
          }

          else {
            votes[1] += 1;
          }
        }

        else {
          votes[4] += 1;
        }
      }

      // tree #14
      if (x[8] <= 0.5) {
        if (x[14] <= 0.5) {
          if (x[12] <= 0.5) {
            if (x[18] <= 0.5) {
              if (x[23] <= 0.5) {
                votes[2] += 1;
              }

              else {
                if (x[21] <= 0.5) {
                  votes[2] += 1;
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
            if (x[4] <= 0.5) {
              votes[0] += 1;
            }

            else {
              votes[3] += 1;
            }
          }
        }

        else {
          if (x[10] <= 0.5) {
            if (x[22] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[0] += 1;
            }
          }

          else {
            if (x[29] <= 0.5) {
              votes[3] += 1;
            }

            else {
              votes[6] += 1;
            }
          }
        }
      }

      else {
        if (x[14] <= 0.5) {
          if (x[4] <= 0.5) {
            votes[4] += 1;
          }

          else {
            votes[1] += 1;
          }
        }

        else {
          votes[6] += 1;
        }
      }

      // tree #15
      if (x[4] <= 0.5) {
        if (x[22] <= 0.5) {
          if (x[17] <= 0.5) {
            if (x[10] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[4] += 1;
            }
          }

          else {
            if (x[6] <= 0.5) {
              if (x[13] <= 0.5) {
                votes[4] += 1;
              }

              else {
                votes[5] += 1;
              }
            }

            else {
              votes[4] += 1;
            }
          }
        }

        else {
          votes[0] += 1;
        }
      }

      else {
        if (x[16] <= 0.5) {
          if (x[23] <= 0.5) {
            if (x[10] <= 0.5) {
              if (x[13] <= 0.5) {
                votes[2] += 1;
              }

              else {
                votes[3] += 1;
              }
            }

            else {
              votes[3] += 1;
            }
          }

          else {
            votes[1] += 1;
          }
        }

        else {
          votes[6] += 1;
        }
      }

      // tree #16
      if (x[4] <= 0.5) {
        if (x[16] <= 0.5) {
          if (x[9] <= 0.5) {
            if (x[23] <= 0.5) {
              votes[5] += 1;
            }

            else {
              if (x[15] <= 0.5) {
                if (x[17] <= 0.5) {
                  votes[0] += 1;
                }

                else {
                  if (x[22] <= 0.5) {
                    votes[5] += 1;
                  }

                  else {
                    votes[0] += 1;
                  }
                }
              }

              else {
                if (x[21] <= 0.5) {
                  votes[5] += 1;
                }

                else {
                  votes[0] += 1;
                }
              }
            }
          }

          else {
            votes[4] += 1;
          }
        }

        else {
          votes[5] += 1;
        }
      }

      else {
        if (x[15] <= 0.5) {
          if (x[12] <= 0.5) {
            if (x[18] <= 0.5) {
              if (x[7] <= 0.5) {
                if (x[20] <= 0.5) {
                  if (x[2] <= 0.5) {
                    if (x[25] <= 0.5) {
                      if (x[10] <= 0.5) {
                        votes[2] += 1;
                      }

                      else {
                        votes[3] += 1;
                      }
                    }

                    else {
                      votes[2] += 1;
                    }
                  }

                  else {
                    votes[2] += 1;
                  }
                }

                else {
                  votes[2] += 1;
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
            votes[3] += 1;
          }
        }

        else {
          votes[6] += 1;
        }
      }

      // tree #17
      if (x[18] <= 0.5) {
        if (x[14] <= 0.5) {
          if (x[11] <= 0.5) {
            if (x[26] <= 0.5) {
              if (x[20] <= 0.5) {
                votes[2] += 1;
              }

              else {
                votes[4] += 1;
              }
            }

            else {
              if (x[7] <= 0.5) {
                votes[2] += 1;
              }

              else {
                votes[1] += 1;
              }
            }
          }

          else {
            votes[3] += 1;
          }
        }

        else {
          if (x[19] <= 0.5) {
            if (x[5] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[3] += 1;
            }
          }

          else {
            if (x[24] <= 0.5) {
              votes[5] += 1;
            }

            else {
              if (x[22] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[0] += 1;
              }
            }
          }
        }
      }

      else {
        if (x[25] <= 0.5) {
          votes[4] += 1;
        }

        else {
          if (x[4] <= 0.5) {
            if (x[24] <= 0.5) {
              votes[4] += 1;
            }

            else {
              if (x[22] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[0] += 1;
              }
            }
          }

          else {
            votes[6] += 1;
          }
        }
      }

      // tree #18
      if (x[16] <= 0.5) {
        if (x[22] <= 0.5) {
          if (x[11] <= 0.5) {
            if (x[15] <= 0.5) {
              if (x[17] <= 0.5) {
                if (x[3] <= 0.5) {
                  if (x[21] <= 0.5) {
                    votes[1] += 1;
                  }

                  else {
                    votes[4] += 1;
                  }
                }

                else {
                  votes[2] += 1;
                }
              }

              else {
                votes[4] += 1;
              }
            }

            else {
              votes[5] += 1;
            }
          }

          else {
            votes[3] += 1;
          }
        }

        else {
          if (x[13] <= 0.5) {
            if (x[8] <= 0.5) {
              if (x[24] <= 0.5) {
                votes[2] += 1;
              }

              else {
                if (x[25] <= 0.5) {
                  votes[2] += 1;
                }

                else {
                  if (x[3] <= 0.5) {
                    votes[0] += 1;
                  }

                  else {
                    if (x[23] <= 0.5) {
                      votes[2] += 1;
                    }

                    else {
                      votes[1] += 1;
                    }
                  }
                }
              }
            }

            else {
              votes[4] += 1;
            }
          }

          else {
            votes[0] += 1;
          }
        }
      }

      else {
        if (x[22] <= 0.5) {
          if (x[21] <= 0.5) {
            votes[4] += 1;
          }

          else {
            votes[5] += 1;
          }
        }

        else {
          votes[6] += 1;
        }
      }

      // tree #19
      if (x[4] <= 0.5) {
        if (x[25] <= 0.5) {
          votes[4] += 1;
        }

        else {
          if (x[18] <= 0.5) {
            if (x[19] <= 0.5) {
              votes[5] += 1;
            }

            else {
              if (x[22] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[0] += 1;
              }
            }
          }

          else {
            if (x[22] <= 0.5) {
              if (x[24] <= 0.5) {
                votes[4] += 1;
              }

              else {
                votes[5] += 1;
              }
            }

            else {
              votes[0] += 1;
            }
          }
        }
      }

      else {
        if (x[17] <= 0.5) {
          if (x[13] <= 0.5) {
            if (x[23] <= 0.5) {
              if (x[12] <= 0.5) {
                if (x[22] <= 0.5) {
                  if (x[10] <= 0.5) {
                    if (x[21] <= 0.5) {
                      votes[1] += 1;
                    }

                    else {
                      votes[2] += 1;
                    }
                  }

                  else {
                    votes[3] += 1;
                  }
                }

                else {
                  votes[2] += 1;
                }
              }

              else {
                votes[3] += 1;
              }
            }

            else {
              if (x[8] <= 0.5) {
                if (x[7] <= 0.5) {
                  if (x[21] <= 0.5) {
                    votes[2] += 1;
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
            votes[3] += 1;
          }
        }

        else {
          votes[6] += 1;
        }
      }

      // tree #20
      if (x[19] <= 0.5) {
        if (x[22] <= 0.5) {
          if (x[21] <= 0.5) {
            if (x[24] <= 0.5) {
              if (x[13] <= 0.5) {
                votes[1] += 1;
              }

              else {
                votes[3] += 1;
              }
            }

            else {
              if (x[8] <= 0.5) {
                votes[3] += 1;
              }

              else {
                votes[1] += 1;
              }
            }
          }

          else {
            votes[5] += 1;
          }
        }

        else {
          if (x[7] <= 0.5) {
            votes[2] += 1;
          }

          else {
            votes[1] += 1;
          }
        }
      }

      else {
        if (x[8] <= 0.5) {
          if (x[22] <= 0.5) {
            if (x[16] <= 0.5) {
              if (x[5] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[2] += 1;
              }
            }

            else {
              votes[5] += 1;
            }
          }

          else {
            if (x[5] <= 0.5) {
              votes[0] += 1;
            }

            else {
              if (x[13] <= 0.5) {
                votes[1] += 1;
              }

              else {
                votes[6] += 1;
              }
            }
          }
        }

        else {
          if (x[23] <= 0.5) {
            votes[4] += 1;
          }

          else {
            votes[6] += 1;
          }
        }
      }

      // tree #21
      if (x[4] <= 0.5) {
        if (x[8] <= 0.5) {
          if (x[15] <= 0.5) {
            if (x[21] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[0] += 1;
            }
          }

          else {
            if (x[21] <= 0.5) {
              votes[5] += 1;
            }

            else {
              if (x[16] <= 0.5) {
                votes[0] += 1;
              }

              else {
                votes[5] += 1;
              }
            }
          }
        }

        else {
          votes[4] += 1;
        }
      }

      else {
        if (x[13] <= 0.5) {
          if (x[25] <= 0.5) {
            if (x[23] <= 0.5) {
              if (x[20] <= 0.5) {
                votes[1] += 1;
              }

              else {
                votes[2] += 1;
              }
            }

            else {
              votes[2] += 1;
            }
          }

          else {
            if (x[24] <= 0.5) {
              votes[2] += 1;
            }

            else {
              if (x[19] <= 0.5) {
                if (x[7] <= 0.5) {
                  votes[2] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }

              else {
                if (x[22] <= 0.5) {
                  votes[2] += 1;
                }

                else {
                  votes[1] += 1;
                }
              }
            }
          }
        }

        else {
          if (x[18] <= 0.5) {
            votes[3] += 1;
          }

          else {
            votes[6] += 1;
          }
        }
      }

      // tree #22
      if (x[7] <= 0.5) {
        if (x[4] <= 0.5) {
          if (x[16] <= 0.5) {
            if (x[27] <= 0.5) {
              votes[4] += 1;
            }

            else {
              if (x[21] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[0] += 1;
              }
            }
          }

          else {
            votes[5] += 1;
          }
        }

        else {
          if (x[11] <= 0.5) {
            if (x[18] <= 0.5) {
              votes[2] += 1;
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            if (x[16] <= 0.5) {
              votes[3] += 1;
            }

            else {
              votes[6] += 1;
            }
          }
        }
      }

      else {
        if (x[5] <= 0.5) {
          votes[4] += 1;
        }

        else {
          if (x[24] <= 0.5) {
            if (x[12] <= 0.5) {
              votes[1] += 1;
            }

            else {
              votes[3] += 1;
            }
          }

          else {
            votes[1] += 1;
          }
        }
      }

      // tree #23
      if (x[18] <= 0.5) {
        if (x[16] <= 0.5) {
          if (x[10] <= 0.5) {
            if (x[4] <= 0.5) {
              if (x[23] <= 0.5) {
                votes[5] += 1;
              }

              else {
                if (x[21] <= 0.5) {
                  votes[5] += 1;
                }

                else {
                  votes[0] += 1;
                }
              }
            }

            else {
              if (x[14] <= 0.5) {
                if (x[3] <= 0.5) {
                  votes[1] += 1;
                }

                else {
                  if (x[2] <= 0.5) {
                    if (x[20] <= 0.5) {
                      votes[1] += 1;
                    }

                    else {
                      if (x[21] <= 0.5) {
                        votes[2] += 1;
                      }

                      else {
                        if (x[23] <= 0.5) {
                          votes[2] += 1;
                        }

                        else {
                          votes[1] += 1;
                        }
                      }
                    }
                  }

                  else {
                    votes[2] += 1;
                  }
                }
              }

              else {
                votes[3] += 1;
              }
            }
          }

          else {
            if (x[21] <= 0.5) {
              votes[3] += 1;
            }

            else {
              votes[4] += 1;
            }
          }
        }

        else {
          votes[5] += 1;
        }
      }

      else {
        if (x[23] <= 0.5) {
          votes[4] += 1;
        }

        else {
          if (x[16] <= 0.5) {
            if (x[21] <= 0.5) {
              votes[5] += 1;
            }

            else {
              if (x[3] <= 0.5) {
                votes[0] += 1;
              }

              else {
                votes[1] += 1;
              }
            }
          }

          else {
            votes[6] += 1;
          }
        }
      }

      // tree #24
      if (x[12] <= 0.5) {
        if (x[9] <= 0.5) {
          if (x[2] <= 0.5) {
            if (x[7] <= 0.5) {
              if (x[16] <= 0.5) {
                if (x[21] <= 0.5) {
                  if (x[14] <= 0.5) {
                    votes[2] += 1;
                  }

                  else {
                    votes[5] += 1;
                  }
                }

                else {
                  if (x[14] <= 0.5) {
                    votes[2] += 1;
                  }

                  else {
                    if (x[18] <= 0.5) {
                      if (x[23] <= 0.5) {
                        votes[5] += 1;
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
                votes[5] += 1;
              }
            }

            else {
              if (x[16] <= 0.5) {
                votes[1] += 1;
              }

              else {
                votes[4] += 1;
              }
            }
          }

          else {
            votes[2] += 1;
          }
        }

        else {
          votes[4] += 1;
        }
      }

      else {
        if (x[23] <= 0.5) {
          votes[3] += 1;
        }

        else {
          if (x[10] <= 0.5) {
            if (x[21] <= 0.5) {
              votes[5] += 1;
            }

            else {
              if (x[15] <= 0.5) {
                votes[0] += 1;
              }

              else {
                if (x[5] <= 0.5) {
                  votes[0] += 1;
                }

                else {
                  votes[6] += 1;
                }
              }
            }
          }

          else {
            votes[6] += 1;
          }
        }
      }

      // tree #25
      if (x[4] <= 0.5) {
        if (x[14] <= 0.5) {
          if (x[12] <= 0.5) {
            votes[4] += 1;
          }

          else {
            votes[0] += 1;
          }
        }

        else {
          if (x[18] <= 0.5) {
            if (x[12] <= 0.5) {
              if (x[22] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[0] += 1;
              }
            }

            else {
              votes[5] += 1;
            }
          }

          else {
            if (x[11] <= 0.5) {
              if (x[12] <= 0.5) {
                votes[0] += 1;
              }

              else {
                if (x[21] <= 0.5) {
                  votes[5] += 1;
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
      }

      else {
        if (x[13] <= 0.5) {
          if (x[8] <= 0.5) {
            if (x[21] <= 0.5) {
              votes[2] += 1;
            }

            else {
              if (x[23] <= 0.5) {
                votes[2] += 1;
              }

              else {
                votes[1] += 1;
              }
            }
          }

          else {
            votes[3] += 1;
          }
        }

        else {
          if (x[17] <= 0.5) {
            votes[3] += 1;
          }

          else {
            votes[6] += 1;
          }
        }
      }

      // tree #26
      if (x[24] <= 0.5) {
        if (x[18] <= 0.5) {
          if (x[10] <= 0.5) {
            if (x[5] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            if (x[21] <= 0.5) {
              votes[3] += 1;
            }

            else {
              votes[4] += 1;
            }
          }
        }

        else {
          votes[4] += 1;
        }
      }

      else {
        if (x[16] <= 0.5) {
          if (x[23] <= 0.5) {
            if (x[10] <= 0.5) {
              if (x[5] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[2] += 1;
              }
            }

            else {
              votes[3] += 1;
            }
          }

          else {
            if (x[3] <= 0.5) {
              if (x[5] <= 0.5) {
                votes[0] += 1;
              }

              else {
                votes[1] += 1;
              }
            }

            else {
              if (x[18] <= 0.5) {
                if (x[27] <= 0.5) {
                  votes[2] += 1;
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
        }

        else {
          votes[6] += 1;
        }
      }

      // tree #27
      if (x[4] <= 0.5) {
        if (x[25] <= 0.5) {
          votes[4] += 1;
        }

        else {
          if (x[22] <= 0.5) {
            if (x[24] <= 0.5) {
              if (x[6] <= 0.5) {
                if (x[16] <= 0.5) {
                  votes[4] += 1;
                }

                else {
                  votes[5] += 1;
                }
              }

              else {
                votes[4] += 1;
              }
            }

            else {
              votes[5] += 1;
            }
          }

          else {
            votes[0] += 1;
          }
        }
      }

      else {
        if (x[17] <= 0.5) {
          if (x[20] <= 0.5) {
            if (x[24] <= 0.5) {
              if (x[25] <= 0.5) {
                if (x[12] <= 0.5) {
                  votes[1] += 1;
                }

                else {
                  votes[3] += 1;
                }
              }

              else {
                votes[2] += 1;
              }
            }

            else {
              if (x[25] <= 0.5) {
                votes[2] += 1;
              }

              else {
                if (x[12] <= 0.5) {
                  votes[1] += 1;
                }

                else {
                  votes[3] += 1;
                }
              }
            }
          }

          else {
            if (x[25] <= 0.5) {
              votes[2] += 1;
            }

            else {
              if (x[22] <= 0.5) {
                votes[2] += 1;
              }

              else {
                if (x[18] <= 0.5) {
                  if (x[19] <= 0.5) {
                    if (x[23] <= 0.5) {
                      votes[2] += 1;
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
          }
        }

        else {
          votes[6] += 1;
        }
      }

      // tree #28
      if (x[21] <= 0.5) {
        if (x[18] <= 0.5) {
          if (x[11] <= 0.5) {
            if (x[7] <= 0.5) {
              if (x[5] <= 0.5) {
                votes[5] += 1;
              }

              else {
                votes[2] += 1;
              }
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            votes[3] += 1;
          }
        }

        else {
          votes[4] += 1;
        }
      }

      else {
        if (x[15] <= 0.5) {
          if (x[5] <= 0.5) {
            if (x[23] <= 0.5) {
              votes[4] += 1;
            }

            else {
              votes[0] += 1;
            }
          }

          else {
            if (x[23] <= 0.5) {
              votes[2] += 1;
            }

            else {
              votes[1] += 1;
            }
          }
        }

        else {
          if (x[23] <= 0.5) {
            votes[5] += 1;
          }

          else {
            if (x[12] <= 0.5) {
              votes[0] += 1;
            }

            else {
              votes[6] += 1;
            }
          }
        }
      }

      // tree #29
      if (x[5] <= 0.5) {
        if (x[21] <= 0.5) {
          if (x[12] <= 0.5) {
            if (x[9] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[4] += 1;
            }
          }

          else {
            votes[5] += 1;
          }
        }

        else {
          if (x[15] <= 0.5) {
            if (x[23] <= 0.5) {
              votes[4] += 1;
            }

            else {
              votes[0] += 1;
            }
          }

          else {
            if (x[22] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[0] += 1;
            }
          }
        }
      }

      else {
        if (x[23] <= 0.5) {
          if (x[22] <= 0.5) {
            if (x[11] <= 0.5) {
              votes[2] += 1;
            }

            else {
              votes[3] += 1;
            }
          }

          else {
            votes[2] += 1;
          }
        }

        else {
          if (x[20] <= 0.5) {
            if (x[25] <= 0.5) {
              votes[2] += 1;
            }

            else {
              votes[1] += 1;
            }
          }

          else {
            if (x[18] <= 0.5) {
              votes[1] += 1;
            }

            else {
              if (x[15] <= 0.5) {
                votes[1] += 1;
              }

              else {
                votes[6] += 1;
              }
            }
          }
        }
      }

      // tree #30
      if (x[4] <= 0.5) {
        if (x[8] <= 0.5) {
          if (x[24] <= 0.5) {
            votes[5] += 1;
          }

          else {
            if (x[22] <= 0.5) {
              votes[5] += 1;
            }

            else {
              votes[0] += 1;
            }
          }
        }

        else {
          votes[4] += 1;
        }
      }

      else {
        if (x[7] <= 0.5) {
          if (x[18] <= 0.5) {
            if (x[20] <= 0.5) {
              if (x[11] <= 0.5) {
                if (x[26] <= 0.5) {
                  votes[3] += 1;
                }

                else {
                  votes[2] += 1;
                }
              }

              else {
                votes[3] += 1;
              }
            }

            else {
              votes[2] += 1;
            }
          }

          else {
            votes[6] += 1;
          }
        }

        else {
          if (x[14] <= 0.5) {
            votes[1] += 1;
          }

          else {
            votes[3] += 1;
          }
        }
      }

      // return argmax of votes
      uint8_t classIdx = 0;
      float maxVotes = votes[0];

      for (uint8_t i = 1; i < 7; i++) {
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
          return "N";
        case 1:
          return "A";
        case 2:
          return "R";
        case 3:
          return "U";
        case 4:
          return "O";
        case 5:
          return "D";
        case 6:
          return "I";
        default:
          return "Houston we have a problem";
      }
    }

  protected:
};
}
}
}
