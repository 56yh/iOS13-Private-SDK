//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteSearch-Protocol.h>

@class CNContactStore;

@interface CNAutocompleteDirectoryServerSearch : NSObject <CNAutocompleteSearch>
{
    CNContactStore *_contactStore;
}

@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
// - (void).cxx_destruct;
- (id)autocompleteResultsForContacts:(id)arg1 request:(id)arg2;
- (id)fetchContactsForFetchRequest:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)executeRequest:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithContactStore:(id)arg1;
- (id)init;

@end

