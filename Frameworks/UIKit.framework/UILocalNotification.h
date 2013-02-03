/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UILocalNotification : NSObject <NSCopying, NSCoding> {
}

@property(copy) NSString *alertAction;
@property(copy) NSString *alertBody;
@property(copy) NSString *alertLaunchImage;
@property(copy) NSString *customLockSliderLabel;
@property(copy) NSDate *fireDate;
@property(copy) NSCalendar *repeatCalendar;
@property(copy) NSString *soundName;
@property(copy) NSTimeZone *timeZone;
@property(copy) NSDictionary *userInfo;
@property BOOL allowSnooze;
@property NSInteger applicationIconBadgeNumber;
@property BOOL fireNotificationsWhenAppRunning;
@property BOOL hasAction;
@property BOOL hideAlertTitle;
@property BOOL interruptAudioAndLockDevice;
@property NSUInteger repeatInterval;
@property BOOL resumeApplicationInBackground;
@property BOOL showAlarmStatusBarItem;
@property BOOL soundNameIsARingtone;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)clearNonSystemProperties;
- (NSInteger)compareFireDates:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;

@end
