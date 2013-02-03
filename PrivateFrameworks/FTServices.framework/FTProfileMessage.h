/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString, NSDictionary;

@interface FTProfileMessage : FTMessage {
    NSString *_authToken;
    NSString *_profileID;
    NSDictionary *_responseAlert;
}

@property(copy) NSString *authToken;
@property(copy) NSString *profileID;
@property(copy) NSDictionary *responseAlertInfo;

- (id)additionalMessageHeaders;
- (id)authToken;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (BOOL)hasRequiredKeys;
- (id)profileID;
- (id)responseAlertInfo;
- (void)setAuthToken:(id)arg1;
- (void)setProfileID:(id)arg1;
- (void)setResponseAlertInfo:(id)arg1;

@end
