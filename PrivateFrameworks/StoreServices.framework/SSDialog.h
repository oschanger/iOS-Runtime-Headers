/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSArray;

@interface SSDialog : NSObject {
    NSArray *_buttons;
    NSDictionary *_dialogDictionary;
}

@property(readonly) NSArray *buttons;
@property(readonly) SSDialogButton *defaultButton;
@property(readonly) NSDictionary *dialogDictionary;
@property(readonly) NSString *dialogKind;
@property(readonly) NSString *message;
@property(readonly) NSString *title;

- (id)buttons;
- (void)dealloc;
- (id)defaultButton;
- (id)dialogDictionary;
- (id)dialogKind;
- (id)init;
- (id)initWithDialogDictionary:(id)arg1;
- (id)message;
- (id)title;
- (id)valueForProperty:(id)arg1;

@end
