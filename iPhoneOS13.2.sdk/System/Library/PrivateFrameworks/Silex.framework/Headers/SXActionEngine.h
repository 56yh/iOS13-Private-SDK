//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionProvider-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SXActionEngine : NSObject <SXActionProvider>
{
    NSMutableDictionary *_additionFactories;
    NSMutableDictionary *_hostNameFactories;
}

@property(readonly, nonatomic) NSMutableDictionary *hostNameFactories; // @synthesize hostNameFactories=_hostNameFactories;
@property(readonly, nonatomic) NSMutableDictionary *additionFactories; // @synthesize additionFactories=_additionFactories;
- (void)registerFactory:(id)arg1 URLHost:(id)arg2;
- (void)registerFactory:(id)arg1 additionType:(Class)arg2;
- (id)actionForURL:(id)arg1;
- (id)actionForAddition:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

