//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXMemoriesBlacklistAccessoryViewSpec.h>

@protocol PXPerson;

@interface PXMemoriesBlacklistPersonAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec
{
    id <PXPerson> _person;
}

+ (id)specWithPerson:(id)arg1;
@property(readonly, nonatomic) id <PXPerson> person; // @synthesize person=_person;
- (id)initWithPerson:(id)arg1;

@end

