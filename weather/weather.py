import xmltodict
import json

file_xml = open("weather.xml", "r")
file_json = open("weather.json", "w")

my_xml = file_xml.read()
file_json.write(json.dumps(xmltodict.parse(my_xml)))

file_xml.close()
file_json.close()

