//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUScalePolicy-Protocol.h>

@class NSString;

@interface NUFixedScalePolicy : NSObject <NUScalePolicy>
{
    CDStruct_1e2b2e48 _scale;
}

+ (id)oneToOneScalePolicy;
@property(readonly) CDStruct_912cb5d2 scale; // @synthesize scale=_scale;
@property(readonly, copy) NSString *description;
- (CDStruct_912cb5d2)scaleForImageSize:(CDStruct_912cb5d2)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithScale:(CDStruct_912cb5d2)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
