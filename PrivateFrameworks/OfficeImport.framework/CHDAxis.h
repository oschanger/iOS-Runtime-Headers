/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CHDTitle, OADGraphicProperties, EDResources;

@interface CHDAxis : NSObject <EDKeyedObject> {
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: v12@0:4B8 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
     /* Encoded args for previous method: B8@0:4 */
    OADGraphicProperties *mAxisGraphicProperties;
    NSInteger mAxisId;
    NSInteger mAxisPosition;
    NSInteger mAxisType;
    NSUInteger mContentFormatId;
    double mCrossAxisId;
    NSInteger mCrossBetween;
    NSInteger mCrosses;
    double mCrossesAt;
    NSInteger mFontIndex;
    OADGraphicProperties *mMajorGridLinesGraphicProperties;
    NSInteger mMajorTickMark;
    OADGraphicProperties *mMinorGridLinesGraphicProperties;
    NSInteger mMinorTickMark;
    NSInteger mOrientation;
    EDResources *mResources;
    double mScalingMaximum;
    double mScalingMinimum;
    NSInteger mTickLabelColorIndex;
    NSInteger mTickLabelPosition;
    double mTickLabelRotation;
    CHDTitle *mTitle;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mAutoCrossValue;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mAutoMaximumValue;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mAutoMinimumValue;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mContentFormatDerived;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mDateTimeFormattingFlag;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mDeleted;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsAutoRotation;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mLineVisible;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mReverseOrder;
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mSecondary;
}

- (void)adjustAxisPositionForHorizontalChart;
- (id)axisGraphicProperties;
- (NSInteger)axisId;
- (NSInteger)axisPosition;
- (NSInteger)axisType;
- (id)contentFormat;
- (NSUInteger)contentFormatId;
- (double)crossAxisId;
- (NSInteger)crossBetween;
- (NSInteger)crosses;
- (double)crossesAt;
- (void)dealloc;
- (id)defaultDateTimeContentFormat;
- (id)font;
- (NSInteger)fontIndex;
- (id)initWithResources:(id)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isAutoCrossValue;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isAutoMaximumValue;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isAutoMinimumValue;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isContentFormatDerivedFromDataPoints;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDate;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDateTimeFormattingFlag;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isDeleted;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isHorizontalPosition;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isLineVisible;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isReverseOrder;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isSecondary;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isTickLabelAutoRotation;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isTickLabelVisible;
- (NSUInteger)key;
- (id)majorGridLinesGraphicProperties;
- (NSInteger)majorTickMark;
- (id)minorGridLinesGraphicProperties;
- (NSInteger)minorTickMark;
- (NSInteger)orientation;
- (double)scalingMaximum;
- (double)scalingMinimum;
- (void)setAxisGraphicProperties:(id)arg1;
- (void)setAxisId:(NSInteger)arg1;
- (void)setAxisPosition:(NSInteger)arg1;
- (void)setAxisType:(NSInteger)arg1;
- (void)setContentFormat:(id)arg1;
- (void)setContentFormatId:(NSUInteger)arg1;
- (void)setCrossAxisId:(double)arg1;
- (void)setCrossBetween:(NSInteger)arg1;
- (void)setCrosses:(NSInteger)arg1;
- (void)setCrossesAt:(double)arg1;
- (void)setDateTimeFormattingFlag:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setDeleted:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setFont:(id)arg1;
- (void)setFontIndex:(NSInteger)arg1;
- (void)setIsContentFormatDerivedFromDataPoints:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setLineVisible:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setMajorGridLinesGraphicProperties:(id)arg1;
- (void)setMajorTickMark:(NSInteger)arg1;
- (void)setMinorGridLinesGraphicProperties:(id)arg1;
- (void)setMinorTickMark:(NSInteger)arg1;
- (void)setOrientation:(NSInteger)arg1;
- (void)setReverseOrder:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setScalingMaximum:(double)arg1;
- (void)setScalingMinimum:(double)arg1;
- (void)setSecondary:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setTickLabelAutoRotation:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
- (void)setTickLabelColorIndex:(NSInteger)arg1;
- (void)setTickLabelPosition:(NSInteger)arg1;
- (void)setTickLabelRotationAngle:(double)arg1;
- (void)setTitle:(id)arg1;
- (NSInteger)tickLabelColorIndex;
- (NSInteger)tickLabelPosition;
- (double)tickLabelRotationAngle;
- (id)title;

@end
