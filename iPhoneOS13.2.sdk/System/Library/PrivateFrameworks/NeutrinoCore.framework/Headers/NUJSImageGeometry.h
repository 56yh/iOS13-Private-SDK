//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSImageGeometryExport-Protocol.h>

@class NUImageGeometry, NUJSScale;

@interface NUJSImageGeometry : NUJSProxy <NUJSImageGeometryExport>
{
}

@property(readonly) long long orientation;
@property(readonly) struct CGSize scaledSize;
@property(readonly) struct CGSize size;
@property(readonly) struct CGRect extent;
@property(readonly) NUJSScale *scale;
@property(readonly) NUImageGeometry *geometry;
- (id)initWithGeometry:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

