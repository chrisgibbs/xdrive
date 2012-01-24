//
//  XFileUtils.h
//  xDrive
//
//  Created by Chris Gibbs on 10/14/11.
//  Copyright (c) 2011 Abilene Christian University. All rights reserved.
//

@interface XFileUtils : NSObject

+ (NSString *)appDocuments;
	// Path of the Documents directory in the app's sandbox

+ (void)moveFileAtPath:(NSString *)oldFilePath toPath:(NSString *)newFilePath;
	// Moves a file from one location to another

@end