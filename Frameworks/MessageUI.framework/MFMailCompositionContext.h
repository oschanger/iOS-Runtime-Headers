/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFGenericAttachmentStore, NSString, NSArray;

@interface MFMailCompositionContext : NSObject {
    struct { 
        unsigned int showKeyboardImmediately : 1; 
    MFGenericAttachmentStore *_attachments;
    NSArray *_bccRecipients;
    NSArray *_ccRecipients;
    } _composeFlags;
    NSString *_messageBody;
    NSString *_sendingAddress;
    NSString *_subject;
    NSArray *_toRecipients;
}

@property(readonly) MFGenericAttachmentStore *attachments;
@property(copy) NSArray *bccRecipients;
@property(copy) NSArray *ccRecipients;
@property(copy) NSString *sendingAddress;
@property(copy) NSString *subject;
@property(copy) NSArray *toRecipients;
@property BOOL showKeyboardImmediately;

+ (id)MFMailCompositionContextWithURL:(id)arg1;

- (id)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)attachments;
- (id)bccRecipients;
- (id)ccRecipients;
- (void)dealloc;
- (id)initNewMessageWithURL:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)messageBody;
- (id)sendingAddress;
- (void)setBccRecipients:(id)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)setSendingAddress:(id)arg1;
- (void)setShowKeyboardImmediately:(BOOL)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (BOOL)showKeyboardImmediately;
- (id)subject;
- (id)toRecipients;

@end
