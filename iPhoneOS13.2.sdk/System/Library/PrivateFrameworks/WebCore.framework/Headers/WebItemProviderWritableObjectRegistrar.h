//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/WebItemProviderRegistrar-Protocol.h>

@class NSData, NSString;
@protocol NSItemProviderWriting;

__attribute__((visibility("hidden")))
@interface WebItemProviderWritableObjectRegistrar : NSObject <WebItemProviderRegistrar>
{
    struct RetainPtr<id<NSItemProviderWriting>> _representingObject;
}

- (id).cxx_construct;
@property(readonly, copy) NSString *description;
- (void)registerItemProvider:(id)arg1;
@property(readonly, nonatomic) id <NSItemProviderWriting> representingObjectForClient;
@property(readonly, nonatomic) id <NSItemProviderWriting> representingObject;
- (id)initWithObject:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSData *dataForClient;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *typeIdentifierForClient;

@end

