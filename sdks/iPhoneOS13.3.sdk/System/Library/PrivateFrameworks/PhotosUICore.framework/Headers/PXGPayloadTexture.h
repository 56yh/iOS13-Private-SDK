//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGBaseTexture.h>

@protocol NSCopying;

@interface PXGPayloadTexture : PXGBaseTexture
{
    int _presentationType;
    id <NSCopying> _payload;
}

@property(readonly, copy, nonatomic) id <NSCopying> payload; // @synthesize payload=_payload;
// - (void).cxx_destruct;
- (BOOL)isOpaque;
@property(readonly, nonatomic) int presentationType;
- (CGSize)pixelSize;
- (CGImage )imageRepresentation;
- (long long)estimatedByteSize;
- (id)init;
- (id)initWithPayload:(id)arg1 presentationType:(int)arg2;

@end

