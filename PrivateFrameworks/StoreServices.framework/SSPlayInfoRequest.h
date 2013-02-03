/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSPlayInfoResponse, SSPlayInfoRequestContext;

@interface SSPlayInfoRequest : SSRequest {
    SSPlayInfoRequestContext *_context;
    SSPlayInfoResponse *_response;
}

@property <SSPlayInfoRequestDelegate> *delegate;
@property(readonly) SSPlayInfoRequestContext *playInfoContext;
@property(readonly) SSPlayInfoResponse *playInfoResponse;

- (void)_sendResponseToDelegate:(id)arg1;
- (id)copyPropertyListEncoding;
- (void)dealloc;
- (id)handleFailureResponse:(id)arg1;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithPlayInfoContext:(id)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (id)playInfoContext;
- (id)playInfoResponse;

@end
