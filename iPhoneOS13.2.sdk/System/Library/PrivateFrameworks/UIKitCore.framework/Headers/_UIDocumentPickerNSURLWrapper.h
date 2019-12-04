//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSData, NSURL;

@interface _UIDocumentPickerNSURLWrapper : NSObject <NSSecureCoding>
{
    NSURL *_url;
    NSURL *_promiseURL;
    NSData *_scope;
    NSData *_promiseScope;
}

+ (void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4;
+ (_Bool)supportsSecureCoding;
+ (id)wrapperForExportWithURL:(id)arg1 error:(id *)arg2;
+ (id)wrapperWithURL:(id)arg1 readonly:(_Bool)arg2;
+ (id)wrapperWithURL:(id)arg1;
+ (id)wrapperWithURL:(id)arg1 createSandboxIfNoneAttached:(_Bool)arg2;
@property(retain) NSData *promiseScope; // @synthesize promiseScope=_promiseScope;
@property(retain) NSData *scope; // @synthesize scope=_scope;
@property(retain) NSURL *promiseURL; // @synthesize promiseURL=_promiseURL;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

