//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class TSCH3DTSPImageDataTexture, TSPData;

__attribute__((visibility("hidden")))
@interface TSCH3DTSPMipmapData : NSObject <TSCHUnretainedParent>
{
    TSCH3DTSPImageDataTexture *mParent;
    TSPData *mData;
}

+ (id)dataWithTSPData:(id)arg1;
@property(readonly, nonatomic) TSPData *data; // @synthesize data=mData;
- (id)databuffer;
- (void)setParent:(id)arg1;
- (void)clearParent;
- (void)dealloc;
- (id)initWithTSPData:(id)arg1;

@end

