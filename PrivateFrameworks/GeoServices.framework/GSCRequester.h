/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */



@interface GSCRequester : PBRequester 
{
    NSInteger _encryptionSelector;
    void *_handle;
}

+ (BOOL)usesEncodedMessages;

- (void)dealloc;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 encryption:(NSInteger)arg3;
- (void)encodeRequestData:(id)arg1 startRequestCallback:(id)arg2;
- (id)decodeResponseData:(id)arg1;

@end