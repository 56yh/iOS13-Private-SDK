//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataAccessExpress/DASearchQuery.h>

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery
{
    _Bool _includePhotos;
    _Bool _calendarInitiated;
    NSString *_searchBase;
    NSString *_searchScope;
}

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;
@property(nonatomic) _Bool calendarInitiated; // @synthesize calendarInitiated=_calendarInitiated;
@property(nonatomic) _Bool includePhotos; // @synthesize includePhotos=_includePhotos;
@property(copy, nonatomic) NSString *searchScope; // @synthesize searchScope=_searchScope;
@property(copy, nonatomic) NSString *searchBase; // @synthesize searchBase=_searchBase;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;

@end

