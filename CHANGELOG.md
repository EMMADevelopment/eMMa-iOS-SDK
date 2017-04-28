#CHANGELOG

### 4.0.0 - 28/04/2027
[NEW] - Rules support
[NEW] - Event attribute support
[NEW] - Swift support
[NEW] - SDK now distributed as framework
[IMPROVE] - Banner now uses full screen width
[CHANGE] - Changed header name to #import <EMMA_iOS/eMMa.h>

### 3.1.9 - 22/02/2017
AdBall usability improved. Now AdBall close with a touch out of creativity. 
Bug fix with startview.

### 3.1.8 - 06/02/2017

[NEW] Added method `[eMMa isAdBallShowing]` to check if AdBall is on screen.


### 3.1.7.1 - 31/01/2017

Bug fixed when showing Stripe.


### 3.1.7 - 25/01/2017

[NEW] Added method `[eMMa setWhitelist:(NSArray*)urls]` to limit urls that will be opened by Webviews.
[NEW] In-App communications can open deeplinks.


### 3.1.6.1 - 12/07/2016

[NEW] Added method `[eMMa setAPIeMMaURL:(NSString*) url]` to configure a proxy url.


### 3.1.6 - 12/07/2016

[NEW] Added banner callback:
  `[eMMa checkForBannerOnViewController:(UIViewController*)viewController withBlock:(eMMaOnBannerShow)onBannerBlock]`
  `[eMMa checkForBannerOnViewcontroller:(UIViewController*)viewController withLabel:(NSString*)label andBlock:(eMMaOnBannerShow)onBannerBlock]`
Add timezone name in communications with EMMA servers.


### 3.1.5.5 - 08/06/2016

Bug fixed with cookie in SDK web.


### 3.1.5.4 - 06/06/2016

Bug fixed when sync with SDK web.


### 3.1.5.2 - 18/05/2016

Improve startSession and startPushSystem.


### 3.1.5.1 - 17/05/2016

Allow push notification permission in anywhere inside app.


### 3.1.5 - 03/05/2016

Added CocoaPods Service.
Bugs fixed.


### 3.1.4 - 06/04/2016



### 3.1.3 - 15/03/2016



### 3.1.2.3 - 14/03/2016



### 3.1.2 - 14/03/2016
