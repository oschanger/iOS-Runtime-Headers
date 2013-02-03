/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABRingtonePickerViewController : ABPickerViewController {
    BOOL _isTextToneViewController;
}

@property(readonly) ABRingtonePicker *picker;

- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (id)init;
- (id)initAsRingtoneViewController:(BOOL)arg1;
- (void)loadView;
- (id)picker;
- (void)ringtoneSaveButtonClicked:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
