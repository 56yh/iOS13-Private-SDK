//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteRestrictions : FATObject
{
    NSNumber *_noUpdateTitle;
    NSNumber *_noUpdateContent;
    NSNumber *_noEmail;
    NSNumber *_noShare;
    NSNumber *_noSharePublicly;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *noSharePublicly; // @synthesize noSharePublicly=_noSharePublicly;
@property(retain, nonatomic) NSNumber *noShare; // @synthesize noShare=_noShare;
@property(retain, nonatomic) NSNumber *noEmail; // @synthesize noEmail=_noEmail;
@property(retain, nonatomic) NSNumber *noUpdateContent; // @synthesize noUpdateContent=_noUpdateContent;
@property(retain, nonatomic) NSNumber *noUpdateTitle; // @synthesize noUpdateTitle=_noUpdateTitle;

@end

