//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface BLTSendQueueSerializer : NSObject
{
    _Bool _usesMessageIdentifiers;
    NSURL *_sendFileURL;
}

@property(readonly, nonatomic) _Bool usesMessageIdentifiers; // @synthesize usesMessageIdentifiers=_usesMessageIdentifiers;
@property(copy, nonatomic) NSURL *sendFileURL; // @synthesize sendFileURL=_sendFileURL;
- (_Bool)handleFileURL:(id)arg1 protobufHandler:(id)arg2;
- (void)sendWithSender:(id)arg1 timeout:(id)arg2 responseHandlers:(id)arg3 didSend:(id /* block */)arg4 didQueue:(id /* block */)arg5;
- (void)add:(id)arg1 type:(unsigned short)arg2 messageIdentifier:(id *)arg3;
- (void)add:(id)arg1 type:(unsigned short)arg2;
- (void)cleanup;
- (id)initWithUsesMessageIdentifiers:(_Bool)arg1;

@end

