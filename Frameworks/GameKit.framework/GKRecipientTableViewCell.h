/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKRecipientTableViewCellView, GKComposeRecipient;

@interface GKRecipientTableViewCell : UITableViewCell {
    GKComposeRecipient *_recipient;
    GKRecipientTableViewCellView *_recipientView;
}

+ (void)_initializeSafeCategory;
+ (id)cellForRecipient:(id)arg1;
+ (float)height;
+ (id)identifier;

- (id)accessibilityLabel;
- (void)dealloc;
- (id)initWithStyle:(NSInteger)arg1 reuseIdentifier:(id)arg2;
- (id)recipient;
- (void)setRecipient:(id)arg1;

@end
