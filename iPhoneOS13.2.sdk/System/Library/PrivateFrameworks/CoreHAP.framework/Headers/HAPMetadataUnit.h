//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HAPMetadataUnit : HMFObject
{
    NSString *_name;
    NSString *_unitDescription;
}

+ (id)init:(id)arg1 withDictionary:(id)arg2;
@property(retain, nonatomic) NSString *unitDescription; // @synthesize unitDescription=_unitDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dump;
- (id)description;
- (id)generateDictionary;
- (id)initWithName:(id)arg1 description:(id)arg2;

@end

