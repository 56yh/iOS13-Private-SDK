//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface HMDAudioStreamSampleRate : NSObject <NSCopying>
{
    long long _sampleRate;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(nonatomic) long long sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithSampleRate:(long long)arg1;
- (id)init;

@end

