//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray, NSString;

@interface GEORequestCounterProactiveTileDownloadInfo : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSArray *_policies;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *policies; // @synthesize policies=_policies;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 policies:(id)arg2;

@end

