//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem
{
    CoreDAVBulkRequestsItem *_crudItem;
    CoreDAVBulkRequestsItem *_simpleItem;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVBulkRequestsItem *simpleItem; // @synthesize simpleItem=_simpleItem;
@property(retain, nonatomic) CoreDAVBulkRequestsItem *crudItem; // @synthesize crudItem=_crudItem;
@property(readonly, nonatomic) NSDictionary *dictRepresentation;
- (id)description;
- (id)init;

@end

