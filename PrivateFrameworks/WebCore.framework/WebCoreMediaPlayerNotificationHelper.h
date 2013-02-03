/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSObject, WebCoreMediaPlayerNotificationHelper, NSMutableDictionary;

@interface WebCoreMediaPlayerNotificationHelper : NSObject {
    struct MediaPlayerPrivateiPhone { int (**x1)(); struct MediaPlayer {} *x2; struct RetainPtr<NSObject> { 
            NSObject *m_ptr; 
        } x3; struct RetainPtr<WebCoreMediaPlayerNotificationHelper> { 
            WebCoreMediaPlayerNotificationHelper *m_ptr; 
        } x4; struct RetainPtr<NSMutableDictionary> { 
            NSMutableDictionary *m_ptr; 
        } x5; NSInteger x6; NSInteger x7; NSInteger x8; NSInteger x9; float x10; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; } *_client;
    BOOL _deferredPropertiesScheduled;
}

- (void)cancelPendingRequests;
- (void)delayNotification:(NSInteger)arg1;
- (void)deliverNotification:(id)arg1;
- (void)disconnect;
- (id)initWithClient:(struct MediaPlayerPrivateiPhone { int (**x1)(); struct MediaPlayer {} *x2; struct RetainPtr<NSObject> { id x_3_1_1; } x3; struct RetainPtr<WebCoreMediaPlayerNotificationHelper> { id x_4_1_1; } x4; struct RetainPtr<NSMutableDictionary> { id x_5_1_1; } x5; NSInteger x6; NSInteger x7; NSInteger x8; NSInteger x9; float x10; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; }*)arg1;
- (void)scheduleDeferredPropertiesWithOptionalDelay:(id)arg1;
- (void)schedulePrepareToPlayWithOptionalDelay:(id)arg1;

@end
