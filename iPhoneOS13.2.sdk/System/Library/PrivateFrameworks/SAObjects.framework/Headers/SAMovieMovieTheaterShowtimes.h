//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, SALocalSearchBusiness2;

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable>
{
}

+ (id)movieTheaterShowtimesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)movieTheaterShowtimes;
@property(retain, nonatomic) SALocalSearchBusiness2 *theater;
@property(copy, nonatomic) NSArray *showtimes;
@property(copy, nonatomic) NSArray *movieShowtimes;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

