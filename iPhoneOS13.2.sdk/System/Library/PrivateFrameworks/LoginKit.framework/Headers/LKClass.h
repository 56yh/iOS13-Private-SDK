//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoginKit/LKStudentProviding-Protocol.h>


@class NSArray, NSMutableDictionary, NSNumber, NSString;

@interface LKClass : NSObject <LKStudentProviding, NSSecureCoding>
{
    NSArray *_students;
    NSString *_classDescription;
    NSString *_className;
    NSString *_classImageURL;
    NSNumber *_classID;
    NSArray *_instructors;
    NSMutableDictionary *_avatarNameSimilarityDictionary;
    NSMutableDictionary *_givenNameSimilarityDictionary;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableDictionary *givenNameSimilarityDictionary; // @synthesize givenNameSimilarityDictionary=_givenNameSimilarityDictionary;
@property(retain, nonatomic) NSMutableDictionary *avatarNameSimilarityDictionary; // @synthesize avatarNameSimilarityDictionary=_avatarNameSimilarityDictionary;
@property(retain, nonatomic) NSArray *instructors; // @synthesize instructors=_instructors;
@property(retain, nonatomic) NSNumber *classID; // @synthesize classID=_classID;
@property(retain, nonatomic) NSString *classImageURL; // @synthesize classImageURL=_classImageURL;
@property(retain, nonatomic) NSString *className; // @synthesize className=_className;
@property(retain, nonatomic) NSString *classDescription; // @synthesize classDescription=_classDescription;
@property(copy, nonatomic) NSArray *students; // @synthesize students=_students;
- (void)_updateNamingSimilarityInfoForUser:(id)arg1;
- (id)initWithClassDictionary:(id)arg1 usersByUserIdentifier:(id)arg2;
- (id)initWithStudents:(id)arg1 instructors:(id)arg2 className:(id)arg3 classID:(id)arg4;
- (id)sortUsers:(id)arg1;
- (_Bool)isEqualToLKClass:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

