//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SFCodingOptions;

@interface SFDecoder : NSObject
{
    id _decoderInternal;
}

@property(copy, nonatomic) SFCodingOptions *options;
- (id)decodeValueOfType:(Class)arg1 fromData:(id)arg2 error:(id)arg3;
- (id)initWithOptions:(id)arg1;

@end

