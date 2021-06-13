# ArduinoMicroML
Embedded Machine Learning for Microcontroller using MicroML framework. [MicroML](https://openbase.com/python/micromlgen) brings Machine Learning algorithms to microcontrollers, including limited 8-bit Arduino AVR boards, to run a classification model. The original repository can be found [here](https://github.com/eloquentarduino/micromlgen).

**Supported classifiers**
* [Decision Tree](https://eloquentarduino.github.io/2020/10/decision-tree-random-forest-and-xgboost-on-arduino/)
* [Random Forest](https://eloquentarduino.github.io/2020/10/decision-tree-random-forest-and-xgboost-on-arduino/)
* [XGBoost](https://eloquentarduino.github.io/2020/10/decision-tree-random-forest-and-xgboost-on-arduino/)
* [Gaussian Naive Bayes](https://eloquentarduino.github.io/2020/08/eloquentml-grows-its-family-of-classifiers-gaussian-naive-bayes-on-arduino/)
* [Support Vector Machines (SVC and OneClassSVM)](https://eloquentarduino.github.io/2020/05/anomaly-detection-on-your-arduino-microcontroller-via-one-class-svm/)
* [Relevant Vector Machines](https://eloquentarduino.github.io/2020/02/even-smaller-machine-learning-models-for-your-mcu/)
* [SEFR (Scalable, Efficient, and Fast classifier)](https://eloquentarduino.github.io/2020/07/sefr-a-fast-linear-time-classifier-for-ultra-low-power-devices/)
* [PCA (Probably Approximately Correct)](https://eloquentarduino.github.io/2020/04/passive-aggressive-classifier-for-embedded-devices/)

## Install
```pip install micromlgen```

## Usage e.g. Decision Tree Classifier
```
from micromlgen import port
from sklearn.tree import DecisionTreeClassifier
from sklearn.datasets import load_iris

clf = DecisionTreeClassifier()
X, y = load_iris(return_X_y=True)
clf.fit(X, y)
print(port(clf))
```

# Examples
| ![space-1.jpg](https://github.com/TronixLab/ArduinoMicroML/blob/main/gif/RGB.gif?raw=true) | 
|:--:| 
| **Fig. 1** *RGB color classifier* |

| ![space-1.jpg](https://github.com/TronixLab/ArduinoMicroML/blob/main/gif/FlexPunch.gif?raw=true) | 
|:--:| 
| **Fig. 2** *IMU classifier* |

| ![space-1.jpg](https://github.com/TronixLab/ArduinoMicroML/blob/main/gif/MorseCode.gif?raw=true) | 
|:--:| 
| **Fig. 3** *Morse Code classifier* |

| ![space-1.jpg](https://github.com/TronixLab/ArduinoMicroML/blob/main/gif/KeyWordSpotting.gif?raw=true) | 
|:--:| 
| **Fig. 4** *Key word spotting* |

## Video Tuturoial on YouTube
[![GitHub Logo](https://github.com/TronixLab/ArduinoMicroML/blob/main/gif/YTcoverPH.jpg)](https://www.youtube.com/watch?v=qeqfoGQs9yo)
