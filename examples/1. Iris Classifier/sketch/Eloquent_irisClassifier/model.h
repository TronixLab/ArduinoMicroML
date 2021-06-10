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
      uint8_t votes[3] = { 0 };
      // tree #1
      if (x[2] <= 3.0499998927116394) {
        votes[0] += 1;
      }

      else {
        if (x[2] <= 5.1000001430511475) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #2
      if (x[0] <= 5.549999952316284) {
        votes[0] += 1;
      }

      else {
        if (x[0] <= 6.1000001430511475) {
          votes[2] += 1;
        }

        else {
          if (x[0] <= 6.8500001430511475) {
            votes[1] += 1;
          }

          else {
            if (x[3] <= 1.649999976158142) {
              votes[2] += 1;
            }

            else {
              votes[1] += 1;
            }
          }
        }
      }

      // tree #3
      if (x[2] <= 2.850000023841858) {
        votes[0] += 1;
      }

      else {
        if (x[0] <= 6.150000095367432) {
          votes[2] += 1;
        }

        else {
          if (x[0] <= 6.5) {
            votes[1] += 1;
          }

          else {
            if (x[0] <= 7.349999904632568) {
              votes[2] += 1;
            }

            else {
              votes[1] += 1;
            }
          }
        }
      }

      // tree #4
      if (x[2] <= 3.0499998927116394) {
        votes[0] += 1;
      }

      else {
        if (x[3] <= 1.75) {
          if (x[1] <= 2.899999976158142) {
            if (x[3] <= 1.399999976158142) {
              votes[2] += 1;
            }

            else {
              votes[1] += 1;
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

      // tree #5
      if (x[0] <= 5.799999952316284) {
        votes[0] += 1;
      }

      else {
        if (x[3] <= 1.899999976158142) {
          if (x[1] <= 2.950000047683716) {
            votes[1] += 1;
          }

          else {
            votes[2] += 1;
          }
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #6
      if (x[2] <= 2.9499999284744263) {
        votes[0] += 1;
      }

      else {
        if (x[3] <= 1.9499999284744263) {
          if (x[2] <= 5.049999952316284) {
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

      // tree #7
      if (x[2] <= 2.949999988079071) {
        votes[0] += 1;
      }

      else {
        if (x[0] <= 6.099999904632568) {
          votes[2] += 1;
        }

        else {
          if (x[3] <= 1.449999988079071) {
            votes[2] += 1;
          }

          else {
            votes[1] += 1;
          }
        }
      }

      // tree #8
      if (x[2] <= 4.950000047683716) {
        if (x[2] <= 3.0499998927116394) {
          votes[0] += 1;
        }

        else {
          votes[2] += 1;
        }
      }

      else {
        votes[1] += 1;
      }

      // tree #9
      if (x[3] <= 0.949999988079071) {
        votes[0] += 1;
      }

      else {
        if (x[0] <= 6.049999952316284) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #10
      if (x[2] <= 3.2999998927116394) {
        votes[0] += 1;
      }

      else {
        if (x[2] <= 5.049999952316284) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #11
      if (x[3] <= 0.800000011920929) {
        votes[0] += 1;
      }

      else {
        if (x[3] <= 1.75) {
          if (x[0] <= 6.5) {
            if (x[0] <= 6.150000095367432) {
              votes[2] += 1;
            }

            else {
              votes[1] += 1;
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

      // tree #12
      if (x[0] <= 5.549999952316284) {
        votes[0] += 1;
      }

      else {
        if (x[0] <= 7.099999904632568) {
          if (x[3] <= 1.75) {
            if (x[1] <= 2.899999976158142) {
              if (x[3] <= 1.399999976158142) {
                votes[2] += 1;
              }

              else {
                votes[1] += 1;
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

      // tree #13
      if (x[0] <= 5.549999952316284) {
        votes[0] += 1;
      }

      else {
        if (x[3] <= 1.449999988079071) {
          votes[2] += 1;
        }

        else {
          if (x[0] <= 6.049999952316284) {
            votes[2] += 1;
          }

          else {
            if (x[1] <= 2.950000047683716) {
              votes[1] += 1;
            }

            else {
              if (x[3] <= 1.75) {
                votes[2] += 1;
              }

              else {
                votes[1] += 1;
              }
            }
          }
        }
      }

      // tree #14
      if (x[3] <= 0.6500000059604645) {
        votes[0] += 1;
      }

      else {
        if (x[2] <= 5.049999952316284) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #15
      if (x[0] <= 5.549999952316284) {
        votes[0] += 1;
      }

      else {
        if (x[2] <= 5.150000095367432) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #16
      if (x[2] <= 5.049999952316284) {
        if (x[3] <= 0.7999999821186066) {
          votes[0] += 1;
        }

        else {
          votes[2] += 1;
        }
      }

      else {
        votes[1] += 1;
      }

      // tree #17
      if (x[3] <= 1.0) {
        votes[0] += 1;
      }

      else {
        if (x[2] <= 5.049999952316284) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #18
      if (x[3] <= 1.0) {
        votes[0] += 1;
      }

      else {
        if (x[2] <= 5.049999952316284) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #19
      if (x[3] <= 0.800000011920929) {
        votes[0] += 1;
      }

      else {
        if (x[0] <= 6.099999904632568) {
          votes[2] += 1;
        }

        else {
          if (x[2] <= 5.049999952316284) {
            votes[2] += 1;
          }

          else {
            votes[1] += 1;
          }
        }
      }

      // tree #20
      if (x[3] <= 0.800000011920929) {
        votes[0] += 1;
      }

      else {
        if (x[2] <= 5.049999952316284) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #21
      if (x[0] <= 5.799999952316284) {
        votes[0] += 1;
      }

      else {
        if (x[2] <= 5.0) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #22
      if (x[2] <= 2.949999988079071) {
        votes[0] += 1;
      }

      else {
        if (x[0] <= 6.099999904632568) {
          votes[2] += 1;
        }

        else {
          if (x[2] <= 5.150000095367432) {
            votes[2] += 1;
          }

          else {
            votes[1] += 1;
          }
        }
      }

      // tree #23
      if (x[3] <= 0.6500000059604645) {
        votes[0] += 1;
      }

      else {
        if (x[2] <= 4.950000047683716) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #24
      if (x[0] <= 5.700000047683716) {
        votes[0] += 1;
      }

      else {
        if (x[3] <= 1.5999999642372131) {
          votes[2] += 1;
        }

        else {
          if (x[2] <= 5.1000001430511475) {
            votes[2] += 1;
          }

          else {
            votes[1] += 1;
          }
        }
      }

      // tree #25
      if (x[2] <= 2.949999988079071) {
        votes[0] += 1;
      }

      else {
        if (x[2] <= 5.0) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #26
      if (x[3] <= 1.75) {
        if (x[0] <= 5.549999952316284) {
          votes[0] += 1;
        }

        else {
          votes[2] += 1;
        }
      }

      else {
        votes[1] += 1;
      }

      // tree #27
      if (x[3] <= 0.800000011920929) {
        votes[0] += 1;
      }

      else {
        if (x[2] <= 4.8999998569488525) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #28
      if (x[0] <= 5.949999809265137) {
        votes[0] += 1;
      }

      else {
        if (x[3] <= 1.75) {
          if (x[1] <= 2.899999976158142) {
            votes[1] += 1;
          }

          else {
            votes[2] += 1;
          }
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #29
      if (x[2] <= 5.150000095367432) {
        if (x[2] <= 2.949999988079071) {
          votes[0] += 1;
        }

        else {
          votes[2] += 1;
        }
      }

      else {
        votes[1] += 1;
      }

      // tree #30
      if (x[3] <= 0.800000011920929) {
        votes[0] += 1;
      }

      else {
        if (x[2] <= 5.049999952316284) {
          votes[2] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // return argmax of votes
      uint8_t classIdx = 0;
      float maxVotes = votes[0];

      for (uint8_t i = 1; i < 3; i++) {
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
          return "Setosa";
        case 1:
          return "Virginica";
        case 2:
          return "Versicolor";
        default:
          return "Houston we have a problem";
      }
    }

  protected:
};
}
}
}
