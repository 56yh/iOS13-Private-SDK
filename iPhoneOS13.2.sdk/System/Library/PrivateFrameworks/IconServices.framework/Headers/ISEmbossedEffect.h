//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IconServices/ISEffect-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ISEmbossedEffect : NSObject <ISEffect>
{
    double _range;
    struct CGSize _offset;
}

@property double range; // @synthesize range=_range;
@property struct CGSize offset; // @synthesize offset=_offset;
- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

