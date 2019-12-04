//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSPFeatureInfo : NSObject
{
    NSString *_identifier;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
}

@property(readonly, nonatomic) unsigned long long writeVersion; // @synthesize writeVersion=_writeVersion;
@property(readonly, nonatomic) unsigned long long readVersion; // @synthesize readVersion=_readVersion;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 readVersion:(unsigned long long)arg2 writeVersion:(unsigned long long)arg3 validatingValues:(_Bool)arg4;
- (id)init;

@end

