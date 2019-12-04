//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveExperimentsInternals/PREResponsesProtocol-Protocol.h>

@class NSString, _PASBundleIdResolver;
@protocol PREResponsesProtocol;

@interface PREResponsesServerRequestHandler : NSObject <PREResponsesProtocol>
{
    id <PREResponsesProtocol> _clientProxy;
    NSString *_clientProcessName;
    _PASBundleIdResolver *_bundleIdResolver;
}

@property(retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // @synthesize bundleIdResolver=_bundleIdResolver;
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(_Bool)arg3 isUsingQuickResponses:(_Bool)arg4 locale:(id)arg5 modelConfigPath:(id)arg6;
- (id)preResponseItemArrayFromQuickResponses:(id)arg1;
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 language:(id)arg4 modelFilePath:(id)arg5 modelConfigPath:(id)arg6 registerDisplayed:(_Bool)arg7 completion:(id /* block */)arg8;
- (void)setRemoteObjectProxy:(id)arg1;

@end

