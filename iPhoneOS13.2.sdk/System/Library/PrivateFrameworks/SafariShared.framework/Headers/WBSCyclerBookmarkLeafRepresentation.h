//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSCyclerBookmarkRepresentation.h>

@class NSURL;

@interface WBSCyclerBookmarkLeafRepresentation : WBSCyclerBookmarkRepresentation
{
    NSURL *_url;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic, setter=setURL:) NSURL *url; // @synthesize url=_url;
- (_Bool)isEquivalent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 uniqueIdentifier:(id)arg3;
- (id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2;

@end

