/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMEvent : DOMObject {
}

@property(retain,readonly) <DOMEventTarget> *currentTarget;
@property(retain,readonly) <DOMEventTarget> *srcElement;
@property(retain,readonly) <DOMEventTarget> *target;
@property(copy,readonly) NSString *type;
@property(readonly) BOOL bubbles;
@property BOOL cancelBubble;
@property(readonly) BOOL cancelable;
@property(readonly) unsigned short eventPhase;
@property BOOL returnValue;
@property(readonly) unsigned long long timeStamp;

- (BOOL)bubbles;
- (BOOL)cancelBubble;
- (BOOL)cancelable;
- (id)currentTarget;
- (void)dealloc;
- (BOOL)defaultPrevented;
- (unsigned short)eventPhase;
- (void)finalize;
- (void)initEvent:(id)arg1 :(BOOL)arg2 :(BOOL)arg3;
- (void)initEvent:(id)arg1 canBubbleArg:(BOOL)arg2 cancelableArg:(BOOL)arg3;
- (void)preventDefault;
- (BOOL)returnValue;
- (void)setCancelBubble:(BOOL)arg1;
- (void)setReturnValue:(BOOL)arg1;
- (id)srcElement;
- (void)stopImmediatePropagation;
- (void)stopPropagation;
- (id)target;
- (unsigned long long)timeStamp;
- (id)type;

@end
