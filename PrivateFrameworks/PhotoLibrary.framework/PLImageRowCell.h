/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray;

@interface PLImageRowCell : UITableViewCell {
    struct CGImage { } *_rowImage;
    NSMutableArray *_stackItemViews;
}

@property(readonly) NSArray *stackItemViews;

+ (void)_initializeSafeCategory;
+ (Class)layerClass;

- (BOOL)_accessibilityAlwaysReturnsChild;
- (void)addStackItemView:(id)arg1;
- (void)clearContents;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)redrawStackItemView:(id)arg1;
- (void)removeStackItemView:(id)arg1;
- (void)setRowImage:(struct CGImage { }*)arg1;
- (id)stackItemViews;

@end
