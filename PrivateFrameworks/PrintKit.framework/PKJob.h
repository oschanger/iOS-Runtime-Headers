/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

@class NSString, PKPrintSettings, NSDate, NSData;

@interface PKJob : NSObject {
    NSInteger mediaProgress;
    NSInteger mediaSheets;
    NSInteger mediaSheetsCompleted;
    NSInteger number;
    NSString *printerDisplayName;
    NSInteger printerKind;
    NSString *printerLocation;
    PKPrintSettings *settings;
    NSInteger state;
    NSData *thumbnailImage;
    NSDate *timeAtCompleted;
    NSDate *timeAtCreation;
    NSDate *timeAtProcessing;
}

@property(retain) NSString *printerDisplayName;
@property(retain) NSString *printerLocation;
@property(retain) PKPrintSettings *settings;
@property(retain) NSData *thumbnailImage;
@property(retain) NSDate *timeAtCompleted;
@property(retain) NSDate *timeAtCreation;
@property(retain) NSDate *timeAtProcessing;
@property NSInteger mediaProgress;
@property NSInteger mediaSheets;
@property NSInteger mediaSheetsCompleted;
@property NSInteger number;
@property NSInteger printerKind;
@property NSInteger state;

+ (id)currentJob;
+ (id)jobs;

- (NSInteger)cancel;
- (BOOL)isEqual:(id)arg1;
- (NSInteger)mediaProgress;
- (NSInteger)mediaSheets;
- (NSInteger)mediaSheetsCompleted;
- (NSInteger)number;
- (id)printerDisplayName;
- (NSInteger)printerKind;
- (id)printerLocation;
- (void)setMediaProgress:(NSInteger)arg1;
- (void)setMediaSheets:(NSInteger)arg1;
- (void)setMediaSheetsCompleted:(NSInteger)arg1;
- (void)setNumber:(NSInteger)arg1;
- (void)setPrinterDisplayName:(id)arg1;
- (void)setPrinterKind:(NSInteger)arg1;
- (void)setPrinterLocation:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setState:(NSInteger)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setTimeAtCompleted:(id)arg1;
- (void)setTimeAtCreation:(id)arg1;
- (void)setTimeAtProcessing:(id)arg1;
- (id)settings;
- (NSInteger)state;
- (id)thumbnailImage;
- (id)timeAtCompleted;
- (id)timeAtCreation;
- (id)timeAtProcessing;
- (NSInteger)update;

@end
