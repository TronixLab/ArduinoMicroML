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
      if (x[41] <= -2.894999921321869) {
        votes[1] += 1;
      }

      else {
        votes[0] += 1;
      }

      // tree #2
      if (x[49] <= 0.950000025331974) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #3
      if (x[109] <= -0.05000000447034836) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #4
      if (x[43] <= 1.9749999642372131) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #5
      if (x[61] <= 0.2750000059604645) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #6
      if (x[24] <= -2.9800000339746475) {
        votes[1] += 1;
      }

      else {
        votes[0] += 1;
      }

      // tree #7
      if (x[60] <= 11.389999866485596) {
        if (x[85] <= 0.2200000062584877) {
          votes[0] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      else {
        votes[1] += 1;
      }

      // tree #8
      if (x[66] <= 10.849999904632568) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #9
      if (x[6] <= -1.1800000667572021) {
        votes[1] += 1;
      }

      else {
        votes[0] += 1;
      }

      // tree #10
      if (x[48] <= 12.845000267028809) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #11
      if (x[43] <= 2.5799999833106995) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #12
      if (x[133] <= -0.17999999970197678) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #13
      if (x[115] <= 0.04999999701976776) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #14
      if (x[91] <= 0.014999999664723873) {
        if (x[113] <= -0.10500000044703484) {
          votes[1] += 1;
        }

        else {
          votes[0] += 1;
        }
      }

      else {
        votes[1] += 1;
      }

      // tree #15
      if (x[7] <= -3.269999861717224) {
        votes[1] += 1;
      }

      else {
        votes[0] += 1;
      }

      // tree #16
      if (x[12] <= -2.1550002098083496) {
        votes[1] += 1;
      }

      else {
        votes[0] += 1;
      }

      // tree #17
      if (x[30] <= 6.009999990463257) {
        votes[1] += 1;
      }

      else {
        votes[0] += 1;
      }

      // tree #18
      if (x[52] <= -0.4399999976158142) {
        votes[1] += 1;
      }

      else {
        if (x[109] <= 0.33500000834465027) {
          votes[0] += 1;
        }

        else {
          votes[1] += 1;
        }
      }

      // tree #19
      if (x[54] <= 11.135000228881836) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #20
      if (x[29] <= -2.490000009536743) {
        votes[1] += 1;
      }

      else {
        votes[0] += 1;
      }

      // tree #21
      if (x[35] <= -3.2800000607967377) {
        votes[1] += 1;
      }

      else {
        votes[0] += 1;
      }

      // tree #22
      if (x[116] <= -1.4449999928474426) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #23
      if (x[29] <= -2.490000009536743) {
        votes[1] += 1;
      }

      else {
        votes[0] += 1;
      }

      // tree #24
      if (x[18] <= -3.059999942779541) {
        votes[1] += 1;
      }

      else {
        votes[0] += 1;
      }

      // tree #25
      if (x[175] <= -0.08499999344348907) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #26
      if (x[103] <= 0.07499999832361937) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #27
      if (x[139] <= -0.26500000804662704) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
      }

      // tree #28
      if (x[84] <= 9.555000305175781) {
        votes[1] += 1;
      }

      else {
        if (x[56] <= -2.2899999618530273) {
          votes[1] += 1;
        }

        else {
          votes[0] += 1;
        }
      }

      // tree #29
      if (x[6] <= -1.1800000667572021) {
        votes[1] += 1;
      }

      else {
        votes[0] += 1;
      }

      // tree #30
      if (x[20] <= -0.47499996423721313) {
        votes[0] += 1;
      }

      else {
        votes[1] += 1;
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
          return "Punch";
        case 1:
          return "Flex";
        default:
          return "Houston we have a problem";
      }
    }

  protected:
};
}
}
}
