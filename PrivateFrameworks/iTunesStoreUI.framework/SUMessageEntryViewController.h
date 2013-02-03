/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImagePickerController, NSArray, <SUMessageEntryViewControllerDelegate>, SUMessageEntryView;

@interface SUMessageEntryViewController : SUViewController <SUMessageEntryViewDelegate> {
    <SUMessageEntryViewControllerDelegate> *_delegate;
    UIImagePickerController *_imagePicker;
    NSArray *_imagePickerMediaTypes;
    SUMessageEntryView *_messageEntryView;
}

@property <SUMessageEntryViewControllerDelegate> *delegate;
@property(copy) NSArray *imagePickerMediaTypes;
@property(copy) NSString *sendButtonTitle;
@property(getter=isPhotoButtonEnabled) BOOL photoButtonEnabled;
@property(getter=isSendButtonEnabled) BOOL sendButtonEnabled;

- (BOOL)_allowsCamera;
- (BOOL)_allowsVideoCamera;
- (void)_dismissImagePickerAnimated:(BOOL)arg1;
- (id)_messageEntryView;
- (void)_promptForSourceType;
- (void)_reloadMessageEntryView;
- (void)_showImagePickerForSourceType:(NSUInteger)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (void)clearMessage;
- (id)copyMessagePartsWithUTI:(id)arg1;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)delegate;
- (void)focusMessageField;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)imagePickerMediaTypes;
- (id)init;
- (BOOL)isPhotoButtonEnabled;
- (BOOL)isSendButtonEnabled;
- (void)loadView;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewPhotoButtonAction:(id)arg1;
- (void)messageEntryViewSendButtonAction:(id)arg1;
- (id)sendButtonTitle;
- (void)setDelegate:(id)arg1;
- (void)setImagePickerMediaTypes:(id)arg1;
- (void)setPhotoButtonEnabled:(BOOL)arg1;
- (void)setSendButtonEnabled:(BOOL)arg1;
- (void)setSendButtonTitle:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
