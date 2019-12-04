//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol CATHTTPMessageParserDelegate;

__attribute__((visibility("hidden")))
@interface CATHTTPMessageParser : NSObject
{
    struct __CFHTTPMessage *mCurrentMessage;
    NSDictionary *mCurrentHeaderFields;
    unsigned long long mCurrentBytesReceived;
    id <CATHTTPMessageParserDelegate> _delegate;
}

+ (id)responseHeaderForContentWithLength:(unsigned long long)arg1;
+ (id)encodeRequestData:(id)arg1;
@property(nonatomic) __weak id <CATHTTPMessageParserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)delegateDidReceiveRequestWithURL:(id)arg1;
- (void)delegateDidReceiveResponseData:(id)arg1 moreComing:(_Bool)arg2;
- (void)delegateDidReceiveRequestData:(id)arg1;
- (_Bool)appendBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;

@end

