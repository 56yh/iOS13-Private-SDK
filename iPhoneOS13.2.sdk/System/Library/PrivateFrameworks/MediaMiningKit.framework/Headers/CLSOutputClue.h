//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSClue.h>

@class CLSEvent, CLSPerson, CLSPlace, NSMutableArray;

@interface CLSOutputClue : CLSClue
{
    NSMutableArray *_relatedInputTimeClues;
    NSMutableArray *_relatedInputLocationClues;
    NSMutableArray *_relatedInputPeopleClues;
    CLSEvent *_relatedEvent;
    CLSPerson *_relatedPerson;
    CLSPlace *_relatedPlace;
}

+ (id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4;
+ (id)clueWithValue:(id)arg1 forKey:(id)arg2;
@property(retain) CLSPlace *relatedPlace; // @synthesize relatedPlace=_relatedPlace;
@property(retain) CLSPerson *relatedPerson; // @synthesize relatedPerson=_relatedPerson;
@property(retain) CLSEvent *relatedEvent; // @synthesize relatedEvent=_relatedEvent;
- (_Bool)isEqualToClue:(id)arg1;
- (id)description;
- (id)relatedInputTimeClues;
- (id)relatedInputPeopleClues;
- (id)relatedInputLocationClues;
- (id)relatedInputClues;
- (void)addRelatedInputClues:(id)arg1;
- (id)init;

@end

