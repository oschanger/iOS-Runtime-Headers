/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSURLResponse, NSString, NSMutableData, NSError, NSURL;

@interface WebCoreSynchronousLoader : NSObject <NSURLConnectionDelegate> {
    struct Credential { 
        struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_user; 
        struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_password; 
        NSInteger m_persistence; 
        struct RetainPtr<__SecIdentity*> { 
            struct __SecIdentity {} *m_ptr; 
        } m_identity; 
        struct RetainPtr<const __CFArray*> { 
            struct __CFArray {} *m_ptr; 
        } m_certificates; 
        NSInteger m_type; 
    BOOL m_allowStoredCredentials;
    NSMutableData *m_data;
    NSError *m_error;
    } m_initialCredential;
    BOOL m_isDone;
    NSString *m_pass;
    NSURLResponse *m_response;
    NSURL *m_url;
    NSString *m_user;
}

+ (id)loadRequest:(id)arg1 allowStoredCredentials:(BOOL)arg2 returningResponse:(id*)arg3 error:(id*)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_data;
- (id)_error;
- (BOOL)_isDone;
- (id)_response;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)dealloc;

@end
