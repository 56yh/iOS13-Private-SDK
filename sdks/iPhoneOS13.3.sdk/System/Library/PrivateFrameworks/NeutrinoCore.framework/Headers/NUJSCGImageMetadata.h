//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSCGImageMetadataExport-Protocol.h>

@interface NUJSCGImageMetadata : NUJSProxy <NUJSCGImageMetadataExport>
{
}

- (id)nu_unwrapJSValue;
@property(readonly) const CGImageMetadata metadata;
- (id)initWithCGImageMetadata:(CGImageMetadata )arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

