//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import <HomeKitDaemon/HMDTLVCreateParse-Protocol.h>


@class HMDSelectedRTPParameters, HMDVideoAttributes, HMDVideoCodec, HMDVideoCodecParameters;

@interface HMDSelectedVideoParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding>
{
    HMDVideoCodec *_codec;
    HMDVideoCodecParameters *_codecParameters;
    HMDVideoAttributes *_videoAttributes;
    HMDSelectedRTPParameters *_rtpParameters;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) HMDSelectedRTPParameters *rtpParameters; // @synthesize rtpParameters=_rtpParameters;
@property(readonly, copy, nonatomic) HMDVideoAttributes *videoAttributes; // @synthesize videoAttributes=_videoAttributes;
@property(readonly, copy, nonatomic) HMDVideoCodecParameters *codecParameters; // @synthesize codecParameters=_codecParameters;
@property(readonly, copy, nonatomic) HMDVideoCodec *codec; // @synthesize codec=_codec;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (_Bool)_parseFromTLVData;
- (id)tlvData;
- (id)initWithCodec:(id)arg1 codecParameter:(id)arg2 attribute:(id)arg3 rtpParameter:(id)arg4;

@end

