//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNote, NSNumber;

@interface EDAMUpdateNoteIfUsnMatchesResult : FATObject
{
    EDAMNote *_note;
    NSNumber *_updated;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *updated; // @synthesize updated=_updated;
@property(retain, nonatomic) EDAMNote *note; // @synthesize note=_note;

@end

